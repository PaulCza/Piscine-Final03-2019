/*
** EPITECH PROJECT, 2019
** parse_sum.c
** File description:
** dlaza
*/

#include "my.h"

int parse_sum(void)
{
    int pro1;
    int pro2;

    pro1 = parse_product();
    while (*x == '+') {
        x = x + 1;
        pro2 = parse_product();
        pro1 = pro1 + pro2;
    }
    while (*x == '-') {
        x = x + 1;
        pro2 = parse_product();
        pro1 = pro1 - pro2;
    }
    return (pro1);
}
