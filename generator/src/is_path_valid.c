/*
** EPITECH PROJECT, 2020
** sdfghj
** File description:
** sdfghjk
*/

#include "../include/my.h"

int check_north_direction(perfect_maze_t *maze, int direction)
{
    if (maze->parser.y - 1 < 0 ||
    maze->ascii_array[maze->parser.y - 1][maze->parser.x] == '*')
        return (-1);
    if (condition_north1(maze, direction) == -1)
        return (-1);
    if (condition_north2(maze, direction) == -1)
        return (-1);
    if (condition_north3(maze, direction) == -1)
        return (-1);
    if (condition_north4(maze, direction) == -1)
        return (-1);
    if (check_intersection_north(maze, direction) == -1)
        return (-1);
}

int check_east_direction(perfect_maze_t *maze, int direction)
{
    if (maze->parser.x + 1 > maze->parser_max.x_max ||
    maze->ascii_array[maze->parser.y][maze->parser.x + 1] == '*')
        return (-1);
    if (condition_east1(maze, direction) == -1)
        return (-1);
    if (condition_east2(maze, direction) == -1)
        return (-1);
    if (condition_east3(maze, direction) == -1)
        return (-1);
    if (condition_east4(maze, direction) == -1)
        return (-1);
    if (check_intersection_east(maze, direction) == -1)
        return (-1);
}

int check_south_direction(perfect_maze_t *maze, int direction)
{
    if (maze->parser.y + 1 > maze->parser_max.y_max ||
    maze->ascii_array[maze->parser.y + 1][maze->parser.x] == '*')
        return (-1);
    if (condition_south1(maze, direction) == -1)
        return (-1);
    if (condition_south2(maze, direction) == -1)
        return (-1);
    if (condition_south3(maze, direction) == -1)
        return (-1);
    if (condition_south4(maze, direction) == -1)
        return (-1);
    if (check_intersection_south(maze, direction) == -1)
        return (-1);
}

int check_west_direction(perfect_maze_t *maze, int direction)
{
    if (maze->parser.x - 1 < 0 ||
    maze->ascii_array[maze->parser.y][maze->parser.x - 1] == '*')
        return (-1);
    if (condition_west1(maze, direction) == -1)
        return (-1);
    if (condition_west2(maze, direction) == -1)
        return (-1);
    if (condition_west3(maze, direction) == -1)
        return (-1);
    if (condition_west4(maze, direction) == -1)
        return (-1);
    if (check_intersection_weast(maze, direction) == -1)
        return (-1);
}

int is_path_valid(perfect_maze_t *maze, int direction)
{
    switch (direction) {
    case 0:
        if (check_north_direction(maze, direction) == -1)
            return (-1);
        break;
    case 1:
        if (check_east_direction(maze, direction) == -1)
            return (-1);
        break;
    case 2:
        if (check_south_direction(maze, direction) == -1)
            return (-1);
        break;
    case 3:
        if (check_west_direction(maze, direction) == -1)
            return (-1);
        break;
    default:
        return (0);
    }
}