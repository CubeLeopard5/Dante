/*
** EPITECH PROJECT, 2020
** get int map
** File description:
** get the int map
*/

#include "../include/my.h"

void init_int_map(int y, int x)
{
    solver.int_map = malloc(sizeof(tile_t *) * (y + 1));

    for (int i = 0; i < y; i++) {
        solver.int_map[i] = malloc(sizeof(tile_t) * (x + 1));
        for (int j = 0; j < x; j++) {
            solver.int_map[i][j].number = 0;
            solver.int_map[i][j].north = 0;
            solver.int_map[i][j].south = 0;
            solver.int_map[i][j].east = 0;
            solver.int_map[i][j].west = 0;
        }
    }
}

void get_int_map(void)
{
    init_int_map(solver.map_size.y, solver.map_size.x);
}