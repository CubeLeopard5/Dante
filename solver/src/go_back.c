/*
** EPITECH PROJECT, 2020
** go back
** File description:
** go back when stuck
*/

#include "../include/my.h"

void go_prev_tile(void)
{
    if (can_go_back_north() == 1) {
        go_back_north();
        return;
    }
    if (can_go_back_east() == 1) {
        go_back_east();
        return;
    }
    if (can_go_back_west() == 1) {
        go_back_west();
        return;
    }
    if (can_go_back_south() == 1) {
        go_back_south();
        return;
    }
    solver.map[solver.parser.y][solver.parser.x] = '*';
    my_putstr("no solution found\n");
    exit (84);
}

void go_back(void)
{
    solver.map[solver.parser.y][solver.parser.x] = '*';
    solver.int_map[solver.parser.y][solver.parser.x].number = -1;
    go_prev_tile();
}