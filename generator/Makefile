##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## make file
##

NAME	= 	generator

RM 	= 	rm -f

SRCS	=	src/main.c						\
			src/maze_gen_algo.c				\
			src/is_path_valid.c				\
			src/check_intersection.c		\
			src/find_path.c					\
			src/go_next_case.c				\
			src/go_back.c					\
			src/am_i_stuck.c				\
			src/generate.c					\
			src/print_maze.c				\
			src/init_struct.c				\
			src/condition_north.c			\
			src/condition_east.c			\
			src/condition_south.c			\
			src/condition_west.c			\

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
