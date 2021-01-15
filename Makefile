##
## EPITECH PROJECT, 2021
## Day9
## File description:
## Makefile for tests
##

CC		=	g++

CXXFLAGS  =	-I. -Wall -Wextra

NAME	=	unit_tests

SRC		=	Character.cpp				\
			Warrior.cpp					\
			Mage.cpp					\
			Paladin.cpp					\
			Priest.cpp					\
			tests/tests_inheritance.cpp	\

OBJ		=	$(SRC:.c=.o)

RM		=	rm -f

all: tests_run

clean:
	$(RM) *.gc*
	$(RM) tests/*.o

fclean:	clean
	$(RM) $(NAME)

tests_run:
	$(CC) -o unit_tests $(SRC) $(CXXFLAGS) --coverage -lcriterion
	./unit_tests

re: fclean all

.PHONY:	all clean fclean re tests_run