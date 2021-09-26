/*
** EPITECH PROJECT, 2020
** sdfghj
** File description:
** sdfh
*/

#include "../include/my.h"

int check_intersection_north(perfect_maze_t *maze, int direction)
{
    if (maze->tile_array[maze->parser.y - 1][maze->parser.x].north == -1 &&
    maze->tile_array[maze->parser.y - 1][maze->parser.x].east == -1 &&
    maze->tile_array[maze->parser.y - 1][maze->parser.x].west == -1)
        return (-1);
    if (maze->tile_array[maze->parser.y][maze->parser.x].north == -1)
        return (-1);
}

int check_intersection_east(perfect_maze_t *maze, int direction)
{
    if (maze->tile_array[maze->parser.y][maze->parser.x + 1].north == -1 &&
    maze->tile_array[maze->parser.y][maze->parser.x + 1].south == -1 &&
    maze->tile_array[maze->parser.y][maze->parser.x + 1].east == -1)
        return (-1);
    if (maze->tile_array[maze->parser.y][maze->parser.x].east == -1)
        return (-1);
}

int check_intersection_south(perfect_maze_t *maze, int direction)
{
    if (maze->tile_array[maze->parser.y + 1][maze->parser.x].south == -1 &&
    maze->tile_array[maze->parser.y + 1][maze->parser.x].east == -1 &&
    maze->tile_array[maze->parser.y + 1][maze->parser.x].west == -1)
        return (-1);
    if (maze->tile_array[maze->parser.y][maze->parser.x].south == -1)
        return (-1);
}

int check_intersection_weast(perfect_maze_t *maze, int direction)
{
    if (maze->tile_array[maze->parser.y][maze->parser.x - 1].north == -1 &&
    maze->tile_array[maze->parser.y][maze->parser.x - 1].south == -1 &&
    maze->tile_array[maze->parser.y][maze->parser.x - 1].west == -1)
        return (-1);
    if (maze->tile_array[maze->parser.y][maze->parser.x].west == -1)
        return (-1);
}