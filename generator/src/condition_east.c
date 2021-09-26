/*
** EPITECH PROJECT, 2020
** sdfghj
** File description:
** sdfghj
*/

#include "../include/my.h"

int condition_east1(perfect_maze_t *maze, int direction)
{
    if (maze->parser.y - 1 < 0)
        if (maze->ascii_array[maze->parser.y + 1][maze->parser.x + 1] == '*')
            return (-1);
}

int condition_east2(perfect_maze_t *maze, int direction)
{
    if (maze->parser.y + 1 > maze->parser_max.y_max)
        if (maze->ascii_array[maze->parser.y - 1][maze->parser.x + 1] == '*')
            return (-1);
}

int condition_east3(perfect_maze_t *maze, int direction)
{
    if (maze->parser.x + 2 <= maze->parser_max.x_max)
        if (maze->ascii_array[maze->parser.y][maze->parser.x + 2] == '*')
            return (-1);
}

int condition_east4(perfect_maze_t *maze, int direction)
{
    if (maze->parser.y - 1 >= 0 && maze->ascii_array[maze->parser.y + 1]
    != NULL)
        if (maze->ascii_array[maze->parser.y - 1][maze->parser.x + 1] == '*'
        || maze->ascii_array[maze->parser.y + 1][maze->parser.x + 1] == '*')
            return (-1);
}