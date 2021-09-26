/*
** EPITECH PROJECT, 2020
** sdfghjkl
** File description:
** dfghj
*/

#include "../include/my.h"

void init_tile_array(perfect_maze_t *maze, int x, int y)
{
    maze->tile_array = malloc(sizeof(tile_t *) * (y + 1));

    for (int i = 0; i < y; i++) {
        maze->tile_array[i] = malloc(sizeof(tile_t) * (x + 1));
        for (int j = 0; j < x; j++) {
            maze->tile_array[i][j].number = 0;
            maze->tile_array[i][j].north = 0;
            maze->tile_array[i][j].south = 0;
            maze->tile_array[i][j].east = 0;
            maze->tile_array[i][j].west = 0;
        }
    }
}

void init_struct(perfect_maze_t *maze, int x, int y)
{
    maze->ascii_array = create_array(x, y);
    maze->ascii_array = fill_array_with(maze->ascii_array, 'X');
    maze->ascii_array[0][0] = '*';
    init_tile_array(maze, x, y);
    maze->tile_array[0][0].number = 1;
    srand(time(NULL));
    maze->parser.x = 0;
    maze->parser.y = 0;
    maze->parser_max.x_max = x - 1;
    maze->parser_max.y_max = y - 1;
    maze->til_nbr = 1;
}