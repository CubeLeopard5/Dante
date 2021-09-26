/*
** EPITECH PROJECT, 2020
** dfghjklfghj
** File description:
** ghj
*/

#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>
#include "signal.h"
#include "sys/stat.h"
#include "sys/types.h"
#include "unistd.h"

char **make_bordel(char **array, int nb_line, int nb_column)
{
    int i = 0;

    srand(time(NULL));
    while (i != (nb_column + nb_line) * 2){
        int y = rand() % nb_line;
        int x = rand() % nb_column;
        array[y][x] = '*';
        i++;
    }
    return (array);
}

char **make_path(char **array, int nb_line, int nb_column)
{
    srand(time(NULL));
    int y = rand() % nb_line;
    int x = rand() % nb_column;
    int nb = (nb_line + nb_column) * 2;
    int tmp = -1;

    while (nb > 0) {
        int i = rand() % 4;
        while (i == tmp)
            i = rand() % 4;
        if (i == 0 && x < nb_column && y < nb_line) {
            array[y][x] = '*';
            x++;
            tmp = 2;
        }
        if (i == 1 && x < nb_column && y < nb_line) {
            array[y][x] = '*';
            y++;
            tmp = 3;
        }
        if (i == 2 && x > 0 && y > 0) {
            array[y][x] = '*';
            x--;
            tmp = 0;
        }
        if (i == 3 && x > 0 && y > 0) {
            array[y][x] = '*';
            y--;
            tmp = 1;
        }
        if (x == nb_column || y == nb_line) {
            y = rand() % nb_line;
            x = rand() % nb_column;
        }
        nb--;
    }
    return (array);
}
/*
int is_path_valid(perfect_maze_t *maze, int direction)
{
    switch (direction) {
    case 0:
        if (maze->ascii_array[maze->parser.y][maze->parser.x + 1] == 'X' &&
            maze->ascii_array[maze->parser.y + 1][maze->parser.x] == 'X' &&
            maze->ascii_array[maze->parser.y][maze->parser.x - 1] == 'X')
            return (-1);
    case 1:
        if (maze->ascii_array[maze->parser.y][maze->parser.x + 1] == 'X' &&
            maze->ascii_array[maze->parser.y + 1][maze->parser.x] == 'X' &&
            maze->ascii_array[maze->parser.y - 1][maze->parser.x] == 'X')
            return (-1);
    case 2:
        if (maze->ascii_array[maze->parser.y][maze->parser.x + 1] == 'X' &&
            maze->ascii_array[maze->parser.y][maze->parser.x - 1] == 'X' &&
            maze->ascii_array[maze->parser.y - 1][maze->parser.x] == 'X')
            return (-1);
    case 3:
        if (maze->ascii_array[maze->parser.y + 1][maze->parser.x] == 'X' &&
            maze->ascii_array[maze->parser.y][maze->parser.x - 1] == 'X' &&
            maze->ascii_array[maze->parser.y - 1][maze->parser.x] == 'X')
            return (-1);
    }
    switch (direction) {
    case 0:
        if (maze->tile_array.north == -1 &&
        maze->tile_array.east == -1 &&
        maze->tile_array.west == -1)
        return (-1);
    case 1:
        if (maze->tile_array.north == -1 &&
        maze->tile_array.south == -1 &&
        maze->tile_array.east == -1)
    }
    if (maze->tile_array.north == -1 &&
        maze->tile_array.south == -1 &&
        maze->tile_array.east == -1 &&
        maze->tile_array.west == -1)
        return (-1);
}*/

int main(int ac, char **av)
{
    char *buffer = my_read(av);
    int nb_line = find_nb_line(buffer);
    int nb_column = find_nb_column(buffer);
    char **array = create_array(array, buffer, nb_line, nb_column);

    print_array(array, nb_line, nb_column);
    printf("\n");
    //array = make_bordel(array, nb_line, nb_column);
    array = make_path(array, nb_line, nb_column);
    print_array(array, nb_line, nb_column);
}

