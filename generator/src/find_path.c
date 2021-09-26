/*
** EPITECH PROJECT, 2020
** find path
** File description:
** find path
*/

#include "../include/my.h"

void find_path(perfect_maze_t *maze)
{
    static int stuck_count = 0;
    int dir = rand() % 4;

    if (is_path_valid(maze, dir) != -1) {
        go_next_case(maze, dir);
        stuck_count = 0;
    } else {
        stuck_count++;
        if (stuck_count >= 3  && am_i_stuck(maze) == 1)
            go_back(maze);
    }

}