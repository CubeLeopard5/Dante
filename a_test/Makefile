##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## task01
##

SRC     =	main.c			\
			make_array.c	\

OBJ     =       $(SRC:.c=.o)

NAME    =	maze

CFLAGS = -g

all:    $(NAME)

$(NAME):        $(OBJ)
	gcc -g -lncurses -o $(NAME) $(OBJ) -g3

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re:     fclean all

auteur:
	echo $(USER) > auteur
