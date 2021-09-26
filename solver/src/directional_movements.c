/*
** EPITECH PROJECT, 2020
** directionnal movements
** File description:
** directional_movements
*/

#include "../include/my.h"

void go_north(void)
{
    solver.tile_nbr += 1;
    solver.parser.y -= 1;
    solver.map[solver.parser.y][solver.parser.x] = 'o';
    solver.int_map[solver.parser.y][solver.parser.x].number = solver.tile_nbr;
}

void go_east(void)
{
    solver.tile_nbr += 1;
    solver.parser.x += 1;
    solver.map[solver.parser.y][solver.parser.x] = 'o';
    solver.int_map[solver.parser.y][solver.parser.x].number = solver.tile_nbr;
}

void go_west(void)
{
    solver.tile_nbr += 1;
    solver.parser.x -= 1;
    solver.map[solver.parser.y][solver.parser.x] = 'o';
    solver.int_map[solver.parser.y][solver.parser.x].number = solver.tile_nbr;
}

void go_south(void)
{
    solver.tile_nbr += 1;
    solver.parser.y += 1;
    solver.map[solver.parser.y][solver.parser.x] = 'o';
    solver.int_map[solver.parser.y][solver.parser.x].number = solver.tile_nbr;
}