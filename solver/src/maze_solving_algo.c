/*
** EPITECH PROJECT, 2020
** maze solving algo
** File description:
** algo for solving the maze
*/

#include "../include/my.h"

void solver_algo(void)
{
    int  i = 0;

    while (solver.parser.x != solver.map_size.x - 1 ||
    solver.parser.y != solver.map_size.y - 1) {
        if (solver.is_stuck == 0) {
            go_next_tile();
        } else {
            go_back();
        }
    }
    for (i = 0; i < solver.map_size.y - 1; i++) {
        my_write(solver.map[i]);
        my_putchar('\n');
    }
    my_write(solver.map[i]);
}