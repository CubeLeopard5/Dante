##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## make file
##

NAME	= 	solver

RM 	= 	rm -f

SRCS	=	src/main.c						\
			src/get_map.c					\
			src/free_map.c					\
			src/maze_solving_algo.c			\
			src/get_int_map.c 				\
			src/go_next_tile.c				\
			src/get_optimal_dir.c			\
			src/check_dirs.c				\
			src/directional_movements.c		\
			src/can_go_back.c				\
			src/go_back.c					\
			src/go_back_this_dir.c			\

OBJ 	=	$(SRCS.c= .o)

CFLAGS	=	-Wall -O0 -Wextra

all:	$(NAME)

$(NAME):library $(OBJS)
	gcc -o $(NAME) $(SRCS) $(OBJ) -L lib/my -l my -g3
library:
	make -C ./lib/my
$(OBJ) :
	gcc -g3 -c $(SRCS) -Wall -Wextra --pedantic
clean:
	$(RM) $(OBJS)

fclean:	clean
	$(RM) $(NAME)

re:	fclean all

.PHONY: all clean fclean re
