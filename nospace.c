/*
** EPITECH PROJECT, 2019
** nospace
** File description:
** pas d'espace
*/

#include "stdlib.h"
#include "my.h"
#include "bistromatic.h"

void nospace(char *str)
{
    int a;
    int b;

    a = 0;
    while (str[a] != '\0') {
        if (str[a] == ' ') {
            my_putstr(SYNTAX_ERROR_MSG);
            exit(EXIT_OPS);
        }
        a = a + 1;
    }
}