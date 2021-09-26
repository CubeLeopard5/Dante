/*
** EPITECH PROJECT, 2020
** free map
** File description:
** free the map array
*/

#include "../include/my.h"

void free_map(char **array)
{
    int i = 0;

    for (i = 0; array[i] != NULL; i++) {
        free(array[i]);
    }
    free (array[i]);
    free(array);
}

void free_int_map(tile_t **array)
{
    int i = 0;

    for (i = 0; i < solver.map_size.y; i++) {
        free (array[i]);
    }
    free(array);
}
