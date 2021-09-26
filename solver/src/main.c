/*
** EPITECH PROJECT, 2020
** solver
** File description:
** solve a maze
*/

#include "../include/my.h"

void prepare_this_tile(int i, int j)
{
    if (solver.map[i][j] == 'X')
        solver.int_map[i][j].number = -1;
}

void prepare_map(void)
{
    solver.int_map[0][0].number = 1;
    solver.map[0][0] = 'o';
    for (int i = 0; i < solver.map_size.y; i++) {
        for (int j = 0; j < solver.map_size.x; j++) {
            prepare_this_tile(i, j);
        }
    }
}

void arg_error_handling(int ac, char **av)
{
    if (ac != 2)
        exit (84);
}

void init_struct(void)
{
    solver.parser.x = 0;
    solver.parser.y = 0;
    solver.tile_nbr = 1;
    solver.is_stuck = 0;
}

int main(int ac, char **av)
{
    arg_error_handling(ac, av);
    init_struct();
    get_map(ac, av);
    get_int_map();
    prepare_map();
    solver_algo();
    free_map(solver.map);
    free_int_map(solver.int_map);
    return (0);
}