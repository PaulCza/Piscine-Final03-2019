/*
** EPITECH PROJECT, 2019
** parse_number
** File description:
** azdaz
*/

#include "my.h"

int parse_number(void)
{
    int number = 0;

    while (*x >= '0' && *x <= '9')
    {
        number = number * 10;
        number = number + *x - '0';
        x = x + 1;
    }
    return number;
}