/*
** EPITECH PROJECT, 2019
** test_eval_expra.c
** File description:
** dzadza
*/

#include <criterion/criterion.h>

Test(test_eval_expra, evaluate_addition)
{
    int result;
    cr_assert_eq(eval_expra("0123456789", "()+-*/%", "2 + 2", "3"), 4);
}

Test(test_eval_expra, evaluate_product)
{
    int result;
    cr_assert_eq(eval_expra("0123456789", "()+-*/%", "2 * 2", "3"), 4);
}
Test(test_eval_expra, evaluate_div)
{
    int result;
    cr_assert_eq(eval_expra("0123456789", "()+-*/%", "2 / 2", "3"), 1);
}
Test(test_eval_expra, evaluate_modulo)
{
    int result;
    cr_assert_eq(eval_expra("0123456789", "()+-*/%", "2 % 2", "3"), 0);
}
Test(test_eval_expra, evaluate_parenthesis)
{
    int result;
    cr_assert_eq(eval_expra("0123456789", "()+-*/%", "2*(2+2)", "3"), 8);
}
Test(test_eval_expra, evaluate_priority)
{
    int result;
    cr_assert_eq(eval_expra("0123456789", "()+-*/%", "2+2*2", "3"), 6);
}
Test(test_eval_expra, evaluate_base_substitution)
{
    int result;
    cr_assert_eq(eval_expra("012345a789", "()+-*/%", "3+a", "3"), 9);
}
Test(test_eval_expra, evaluate_sub)
{
    int result;
    cr_assert_eq(eval_expra("0123456789", "()+-*/%", "9-6", "3"), 3);
}
