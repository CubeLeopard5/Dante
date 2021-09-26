/*
** EPITECH PROJECT, 2020
** go back this dir
** File description:
** go back north, south east or west
*/

#include "../include/my.h"

void go_back_north(void)
{
    solver.int_map[solver.parser.y][solver.parser.x].number = - 1;
    solver.map[solver.parser.y][solver.parser.x] = '*';
    solver.parser.y--;
    solver.int_map[solver.parser.y][solver.parser.x].south = - 1;
    solver.is_stuck = 0;
    solver.tile_nbr -= 1;
}

void go_back_south(void)
{
    solver.int_map[solver.parser.y][solver.parser.x].number = - 1;
    solver.map[solver.parser.y][solver.parser.x] = '*';
    solver.parser.y++;
    solver.int_map[solver.parser.y][solver.parser.x].north = - 1;
    solver.is_stuck = 0;
    solver.tile_nbr -= 1;
}

void go_back_east(void)
{
    solver.int_map[solver.parser.y][solver.parser.x].number = - 1;
    solver.map[solver.parser.y][solver.parser.x] = '*';
    solver.parser.x++;
    solver.int_map[solver.parser.y][solver.parser.x].west = - 1;
    solver.is_stuck = 0;
    solver.tile_nbr -= 1;
}

void go_back_west(void)
{
    solver.int_map[solver.parser.y][solver.parser.x].number = - 1;
    solver.map[solver.parser.y][solver.parser.x] = '*';
    solver.parser.x--;
    solver.int_map[solver.parser.y][solver.parser.x].east = - 1;
    solver.is_stuck = 0;
    solver.tile_nbr -= 1;
}