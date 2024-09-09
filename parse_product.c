/*
** EPITECH PROJECT, 2019
** parse_product.c
** File description:
** fezfzef
*/

#include "my.h"

int parse_product(void)
{
    int fac2;
    int fac1;

    fac1 = parse_factors();
    while (*x == '*'){
        x = x + 1;
        fac2 = parse_factors();
        fac1 = fac1 * fac2;
    }
    while (*x == '/'){
        x = x + 1;
        fac2 = parse_factors();
        fac1 = fac1 / fac2;
    }
    while (*x == '%'){
        x = x + 1;
        fac2 = parse_factors();
        fac1 = fac1 % fac2;
    }
    return (fac1);
}
