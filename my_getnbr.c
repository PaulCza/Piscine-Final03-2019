/*
** EPITECH PROJECT, 2019
** my_get_nbr.c
** File description:
** dazd
*/

#include "my.h"

int my_get_nbr(char *str)
{
    int var;
    int inv;
    int i;

    inv = 1;
    var = 0;
    i = 0;

    while ((*str < 47 || *str > 58) && *str != 0) {
        str = str + 1;
        i = i + 1;
    }
    if (i > 0 && *(str - 1) == 45)
        inv = -1;
    while (*str != 0 && *str >= '0' && *str <= '9') {
        var = var * 10;
        var = var + *str - 48;
        str = str + 1;
    }
    var = var * inv;
    return (var);
}