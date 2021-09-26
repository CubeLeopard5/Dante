/*
** EPITECH PROJECT, 2020
** main
** File description:
** main file
*/

#include "../include/my.h"

int isnum(char const *str)
{
    for (int i = 0; str[i]; i++)
        if (!isdigit(str[i]))
            return 0;
    return 1;
}

int main(int ac, char **av)
{
    perfect_maze_t maze;
    int x = 0;
    int y = 0;

    if (ac < 3 || ac > 4)
        exit(84);
    if (isnum(av[1]) == 0 || isnum(av[2]) == 0)
        exit(84);
    x = atoi(av[1]);
    y = atoi(av[2]);
    init_struct(&maze, x, y);
    if (ac == 3) {
        maze_gen_algo(&maze, x, y);
        generate_imperfect_maze(&maze, x, y);
    }
    else
        generate_perfect_maze(&maze, x, y);
    print_maze(&maze);
}