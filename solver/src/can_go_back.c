/*
** EPITECH PROJECT, 2020
** can go back
** File description:
** can_go_back
*/

#include "../include/my.h"

int can_go_back_north(void)
{
    if (solver.parser.y == 0 ||
    solver.int_map[solver.parser.y - 1][solver.parser.x].number <= 0)
        return (-1);
    if (solver.int_map[solver.parser.y - 1][solver.parser.x].number !=
    solver.tile_nbr - 1)
        return (-1);
    return (1);
}

int can_go_back_east(void)
{
    if (solver.parser.x == solver.map_size.x - 1 ||
    solver.int_map[solver.parser.y][solver.parser.x + 1].number <= 0)
        return (-1);
    if (solver.int_map[solver.parser.y][solver.parser.x + 1].number !=
    solver.tile_nbr - 1)
        return (-1);
    return (1);
}

int can_go_back_west(void)
{
    if (solver.parser.x == 0 ||
    solver.int_map[solver.parser.y][solver.parser.x - 1].number <= 0)
        return (-1);
    if (solver.int_map[solver.parser.y][solver.parser.x - 1].number !=
    solver.tile_nbr - 1)
        return (-1);
    return (1);
}

int can_go_back_south(void)
{
    if (solver.parser.y == solver.map_size.y - 1 ||
    solver.int_map[solver.parser.y + 1][solver.parser.x].number <= 0)
        return (-1);
    if (solver.int_map[solver.parser.y + 1][solver.parser.x].number !=
    solver.tile_nbr - 1) {
        return (-1);
    }
    return (1);
}