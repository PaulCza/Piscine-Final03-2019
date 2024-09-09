/*
** EPITECH PROJECT, 2019
** main.c
** File description:
** main de la bistro
*/

#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include "bistromatic.h"
#include "my.h"

static char  *get_expr(unsigned int size)
{
    char *expr;

    if (size <= 0) {
        my_putstr(SYNTAX_ERROR_MSG);
        exit(EXIT_SIZE_NEG);
    }
    expr = malloc(size + 1);
    if (expr == 0) {
        my_putstr(ERROR_MSG);
        exit(EXIT_MALLOC);
    }
    if (read(0, expr, size) != size) {
        my_putstr(ERROR_MSG);
        exit(EXIT_READ);
    }
    expr[size] = 0;
    return (expr);
}

static void check_ops(char const *ops)
{
    if (my_strlen(ops) != 7) {
        my_putstr(SYNTAX_ERROR_MSG);
        exit(EXIT_OPS);
    }
}

static void check_base(char const *b)
{
    if (my_strlen(b) < 2) {
        my_putstr(SYNTAX_ERROR_MSG);
        exit(EXIT_BASE);
    }
}

int main(int ac, char **av)
{
    unsigned int size;
    char *expr;
    int result;

    if (ac != 4) {
        my_putstr("Usage: ");
        my_putstr(av[0]);
        my_putstr(" base ops\"()+-*/%\" exp_len\n");
        return (EXIT_USAGE);
    }
    check_base(av[1]);
    check_ops(av[2]);
    size = my_atoi(av[3]);
    expr = get_expr(size);
    result = eval_expra(av[1], av[2], expr, size);
    my_put_nbr(result);
    my_putchar('\n');
    return (EXIT_SUCCESS);
}