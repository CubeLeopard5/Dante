/*
** EPITECH PROJECT, 2020
** sdfghjk
** File description:
** dfghjkl
*/

#include "../include/my.h"

int go_back_south(perfect_maze_t *maze)
{
    if (maze->parser.x != 0 &&
    maze->tile_array[maze->parser.y][maze->parser.x - 1].number != 0) {
        maze->tile_array[maze->parser.y][maze->parser.x - 1].east = -1;
        maze->parser.x--;
        return (1);
    }
    return (0);
}

int go_back_west(perfect_maze_t *maze)
{
    if (maze->ascii_array[maze->parser.y + 1] != NULL &&
        maze->tile_array[maze->parser.y + 1][maze->parser.x].number != 0) {
        maze->tile_array[maze->parser.y + 1][maze->parser.x].north = -1;
        maze->parser.y++;
        return (1);
    }
    return (0);
}

int go_back_east(perfect_maze_t *maze)
{
    if (maze->ascii_array[maze->parser.y][maze->parser.x + 1] != '\0' &&
        maze->tile_array[maze->parser.y][maze->parser.x + 1].number != 0) {
        maze->tile_array[maze->parser.y][maze->parser.x + 1].west = -1;
        maze->parser.x++;
        return (1);
    }
    return (0);
}

static int go_back_north(perfect_maze_t *maze)
{
    if (maze->parser.y != 0 &&
    maze->tile_array[maze->parser.y - 1][maze->parser.x].number != 0) {
        maze->tile_array[maze->parser.y - 1][maze->parser.x].south = -1;
        maze->parser.y--;
        return (1);
    }
    return (0);
}

void go_back(perfect_maze_t *maze)
{
    maze->tile_array[maze->parser.y][maze->parser.x].number = 0;
    maze->ascii_array[maze->parser.y][maze->parser.x] = 'X';
    if (go_back_north(maze) == 1)
        return;
    if (go_back_east(maze) == 1)
        return;
    if (go_back_west(maze) == 1)
        return;
    if (go_back_south(maze) == 1)
        return;

}