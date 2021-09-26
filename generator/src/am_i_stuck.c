/*
** EPITECH PROJECT, 2020
** am i stuck
** File description:
** check if stuck
*/

#include "../include/my.h"

int is_west_stuck(perfect_maze_t *maze)
{
    if (maze->tile_array[maze->parser.y][maze->parser.x].west == -1)
        return (1);
    if (is_path_valid(maze, 3) == -1)
        return (1);
}

int is_east_stuck(perfect_maze_t *maze)
{
    if (maze->tile_array[maze->parser.y][maze->parser.x].east == -1)
        return (1);
    if (is_path_valid(maze, 1) == -1)
        return (1);
}

int is_south_stuck(perfect_maze_t *maze)
{
    if (maze->tile_array[maze->parser.y][maze->parser.x].south == -1)
        return (1);
    if (is_path_valid(maze, 2) == -1)
        return (1);
}

int is_north_stuck(perfect_maze_t *maze)
{
    if (maze->tile_array[maze->parser.y][maze->parser.x].north == -1)
        return (1);
    if (is_path_valid(maze, 0) == -1)
        return (1);
}

int am_i_stuck(perfect_maze_t *maze)
{
    int stuck_count = 0;

    if (is_north_stuck(maze) == 1)
        stuck_count++;
    if (is_south_stuck(maze) == 1)
        stuck_count++;
    if (is_east_stuck(maze) == 1)
        stuck_count++;
    if (is_north_stuck(maze) == 1)
        stuck_count++;
    if (stuck_count >= 4) {
        return (1);
    }
    return (0);
}