/*
** EPITECH PROJECT, 2020
** maze gen algo
** File description:
** maze_gen_algo
*/

#include "../include/my.h"

void maze_gen_algo(perfect_maze_t *maze, int x, int y)
{
    while ((maze->parser.x < x -1 || maze->parser.y < y - 1))
        find_path(maze);
}