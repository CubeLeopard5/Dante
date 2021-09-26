/*
** EPITECH PROJECT, 2020
** check dirs
** File description:
** checks if can move this dir
*/

#include "../include/my.h"

int can_go_north(void)
{
    int x = solver.parser.x;
    int y = solver.parser.y;

    if (solver.parser.y == 0 || solver.int_map[y][x].north == -1 ||
    solver.int_map[y - 1][x].number != 0)
        return (-1);
    else if (solver.int_map[y - 1][x].east == - 1 &&
    solver.int_map[y - 1][x].south == - 1 &&
    solver.int_map[y - 1][x].west == - 1)
        return (-1);
    return (1);
}

int can_go_south(void)
{
    int x = solver.parser.x;
    int y = solver.parser.y;

    if (solver.parser.y == solver.map_size.y - 1 ||
    solver.int_map[y][x].south == -1 ||
    solver.int_map[y + 1][x].number != 0)
        return (-1);
    else if (solver.int_map[y + 1][x].north == - 1 &&
    solver.int_map[y + 1][x].east == - 1 &&
    solver.int_map[y + 1][x].west == - 1)
        return (-1);
    return (1);
}

int can_go_west(void)
{
    int x = solver.parser.x;
    int y = solver.parser.y;

    if (solver.parser.x == 0 || solver.int_map[y][x].west == -1 ||
    solver.int_map[y][x - 1].number != 0)
        return (-1);
    else if (solver.int_map[y][x - 1].north == - 1 &&
    solver.int_map[y][x - 1].east == - 1 &&
    solver.int_map[y][x - 1].south == - 1)
        return (-1);
    return (1);
}

int can_go_east(void)
{
    int x = solver.parser.x;
    int y = solver.parser.y;

    if (solver.parser.x == solver.map_size.x - 1
    || solver.int_map[y][x].east == -1 ||
    solver.int_map[y][x + 1].number != 0)
        return (-1);
    else if (solver.int_map[y][x + 1].north == - 1 &&
    solver.int_map[y][x + 1].east == - 1 &&
    solver.int_map[y][x + 1].south == - 1)
        return (-1);
    return (1);
}
