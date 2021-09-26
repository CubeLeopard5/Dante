/*
** EPITECH PROJECT, 2020
** dfghjk
** File description:
** fgh
*/

#include "../include/my.h"

void free_maps(perfect_maze_t *maze)
{
    int i = 0;

    for (i = 0; maze->ascii_array[i] != NULL; i++)
        free(maze->ascii_array[i]);
    free(maze->ascii_array[i]);
    free(maze->ascii_array);
    for (int i = 0; i < maze->parser_max.y_max + 1; i++)
        free(maze->tile_array[i]);
    free(maze->tile_array);
}

void print_maze(perfect_maze_t *maze)
{
    for (int i = 0; maze->ascii_array[i] != NULL; i++) {
        printf("%s", maze->ascii_array[i]);
        if (maze->ascii_array[i + 1] != NULL)
            printf("\n");
    }
    free_maps(maze);
}
