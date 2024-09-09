/*
** EPITECH PROJECT, 2019
** check_0
** File description:
** div_modulo_by_0
*/

#include "my.h"
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include "bistromatic.h"

void check_0(char *str)
{
    int a;

    a = 0;
    while (str[a] != '\0'){
        if (str[a] == '/' || str[a] == '%'){
            if (str[a + 1] == '0' || str[a + 1] == '-'){
                my_putstr(SYNTAX_ERROR_MSG);
                exit(EXIT_OPS);
            }
        }
        a = a + 1;
    }
}