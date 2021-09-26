/*
** EPITECH PROJECT, 2020
** go next case
** File description:
** go to the next case
*/

#include "../include/my.h"

void go_west(perfect_maze_t *maze)
{
    maze->parser.x -= 1;
    maze->ascii_array[maze->parser.y][maze->parser.x] = '*';
    maze->tile_array[maze->parser.y][maze->parser.x].number = maze->til_nbr;
}

void go_east(perfect_maze_t *maze)
{
    maze->parser.x += 1;
    maze->ascii_array[maze->parser.y][maze->parser.x] = '*';
    maze->tile_array[maze->parser.y][maze->parser.x].number = maze->til_nbr;
}

void go_south(perfect_maze_t *maze)
{
    maze->parser.y += 1;
    maze->ascii_array[maze->parser.y][maze->parser.x] = '*';
    maze->tile_array[maze->parser.y][maze->parser.x].number = maze->til_nbr;
}

void go_north(perfect_maze_t *maze)
{
    maze->parser.y -= 1;
    maze->ascii_array[maze->parser.y][maze->parser.x] = '*';
    maze->tile_array[maze->parser.y][maze->parser.x].number = maze->til_nbr;
}

void go_next_case(perfect_maze_t *maze, int dir)
{
    maze->til_nbr += 1;
    if (dir == 0)
        go_north(maze);
    if (dir == 1)
        go_east(maze);
    if (dir == 2)
        go_south(maze);
    if (dir == 3)
        go_west(maze);
}