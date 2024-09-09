/*
** EPITECH PROJECT, 2019
** parse_factors.c
** File description:
** zfez
*/

#include "my.h"

int parse_factors(void)
{
    int sum;

    if (*x >= '0' && *x <= '9'){
        return parse_number();
    } else if (*x == '(' ){
        x = x + 1;
        sum = parse_sum();
        x = x + 1;
        return sum;
    } else {
        return (0);
    }
}
