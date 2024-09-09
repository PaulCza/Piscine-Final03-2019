/*
** EPITECH PROJECT, 2019
** eval_expr.c
** File description:
** azdazza
*/

#include "my.h"

int eval_expra(char *osef, char *osef2, char *str, int size)
{
    int result;
    char *base;
    char *op;
    char *plop;

    op = my_strdup(osef2);
    base = my_strdup(osef);
    x = my_strdup(str);
    check_0(str);
    nospace(str);
    x = basesub(x, base);
    plop = my_strdup(x);
    plop = sub_op(x, op);
    x = my_strdup(plop);
    result = parse_formula();
    return (result);
}
