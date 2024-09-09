##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## oh bordel
##

SRC	=	main.c			\
		eval_expr.c		\
		my_put_nbr_str.c		\
		parse_factors.c		\
		parse_formula.c		\
		parse_product.c		\
		my_strdup.c		\
		my_strlen.c		\
		parse_number.c		\
		parse_sum.c		\
		nospace.c		\
		my_atoi.c		\
		sub_op.c		\
		basesub.c		\
		check_0.c		\

TEST	=       eval_expr.c             \
                parse_factors.c         \
                parse_formula.c         \
                parse_product.c         \
                my_strdup.c             \
                my_strlen.c             \
                parse_number.c          \
                parse_sum.c             \
                nospace.c               \
                sub_op.c                \
                basesub.c               \
				check_0.c				\


NAME	= calc

OBJ	= $(SRC:.c=.o)

all:	$(NAME)

$(NAME):	$(OBJ)
	gcc -o $(NAME) $(OBJ)

tests_run:
	gcc -o unit_tests tests/test_eval_expr.c $(TEST) --coverage -lcriterion
	./unit_tests


clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)
	rm -f *.gcda
	rm -f *.gcno
	rm -f unit_tests

tclean: rm  *.gcda
	rm  *.gcno

re: fclean all

.PHONY: all clean fclean re tests_run tclean

