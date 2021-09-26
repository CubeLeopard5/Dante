/*
** EPITECH PROJECT, 2020
** sdfghj
** File description:
** sdfghj
*/

#include "../include/my.h"

void generate_all_cells(perfect_maze_t *maze, int x, int y)
{
    for (int i = 0; i < y; i += 2)
        for (int j = 0; j < x; j += 2)
            maze->ascii_array[i][j] = '*';

    for (int i = 0; i < x; i++)
        maze->ascii_array[0][i] = '*';
}

void create_perfect_paths(perfect_maze_t *maze, int x, int y, int i)
{
    int nb = 0;

    for (int j = 0; j < x; j += 2) {
        int dir = rand () % 2;
        if (dir == 1 && maze->ascii_array[i - 2][j] == '*')
            maze->ascii_array[i - 1][j] = '*';
        else if (dir == 0 && maze->ascii_array[i][j + 1] != '\0')
            maze->ascii_array[i][j + 1] = '*';
    }
    if (maze->ascii_array[i][x - 1] == '*') {
        for (int k = x - 1; maze->ascii_array[i][k] == '*'; k--, nb++);
        int var = rand() % nb + 1;
        while (maze->ascii_array[i - 2][x - var] != '*')
            var = rand() % nb + 1;
        maze->ascii_array[i - 1][x - var] = '*';
        nb = 0;
    }
}

void finish_path(perfect_maze_t *maze, int x, int y)
{
    int nor = rand() % 2;
    if (nor == 0)
        maze->ascii_array[y - 2][x - 1] = '*';
    else
        maze->ascii_array[y - 1][x - 2] = '*';
}

void generate_perfect_maze(perfect_maze_t *maze, int x, int y)
{
    generate_all_cells(maze, x, y);
    for (int i = 2; i < y; i += 2)
        create_perfect_paths(maze, x, y, i);
    maze->ascii_array[y - 1][x - 1] = '*';
    if (maze->ascii_array[y - 2][x - 1] != '*')
        finish_path(maze, x, y);
}

void generate_imperfect_maze(perfect_maze_t *maze, int x, int y)
{
    for (int i = 2; i < y; i += 2) {
        for (int j = 0; j < x; j++) {
            maze->ascii_array[i][j] = '*';
            int dir = rand () % 2;
            if (dir == 1) {
                maze->ascii_array[i - 1][j] = '*';
                j++;
            }
            else if (dir == 0 && maze->ascii_array[i][j + 1] != '\0')
                maze->ascii_array[i][j + 1] = '*';
        }
    }
}