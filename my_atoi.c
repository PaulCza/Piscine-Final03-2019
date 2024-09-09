/*
** EPITECH PROJECT, 2019
** my_atoi.c
** File description:
** blablabla
*/

#include "my.h"

int my_atoi(char *str)
{
    int a;
    int i;

    a = 0;
    for (i = 0; str[i] != '\0'; ++i)
        a = a * 10 + str[i] - '0';
    return a;
}