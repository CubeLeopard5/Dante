/*
** EPITECH PROJECT, 2020
** sdfghjk
** File description:
** sdfghj
*/

#include "../include/my.h"

int condition_north1(perfect_maze_t *maze, int direction)
{
    if (maze->parser.x - 1 < 0)
        if (maze->ascii_array[maze->parser.y - 1][maze->parser.x + 1] == '*')
            return (-1);
}

int condition_north2(perfect_maze_t *maze, int direction)
{
    if (maze->parser.x + 1 > maze->parser_max.x_max)
        if (maze->ascii_array[maze->parser.y - 1][maze->parser.x - 1] == '*')
            return (-1);
}

int condition_north3(perfect_maze_t *maze, int direction)
{
    if (maze->parser.y - 2 >= 0)
        if (maze->ascii_array[maze->parser.y - 2][maze->parser.x] == '*')
            return (-1);
}

int condition_north4(perfect_maze_t *maze, int direction)
{
    if (maze->parser.x - 1 >= 0 && maze->ascii_array[maze->parser.y]
    [maze->parser.x] != '\0')
        if (maze->ascii_array[maze->parser.y - 1][maze->parser.x + 1] == '*'
        || maze->ascii_array[maze->parser.y - 1][maze->parser.x - 1] == '*')
            return (-1);
}