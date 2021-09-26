/*
** EPITECH PROJECT, 2020
** get map
** File description:
** get the map
*/

#include "../include/my.h"

void fill_this_line(int y, int x, int fd)
{
    char *buffer = malloc(sizeof(char) * 1);

    read(fd, buffer, 1);
    if (buffer[0] != 'X' && buffer[0] != '*') {
        free(buffer);
        close(fd);
        free_map(solver.map);
        exit (84);
    }
    solver.map[y][x] = buffer[0];
    free(buffer);
}

void fill_map(int fd)
{
    char *buffer = malloc(sizeof(char) * 1);

    for (int y = 0; y < solver.map_size.y; y++) {
        for (int x = 0; x < solver.map_size.x; x++) {
            fill_this_line(y, x, fd);
        }
        read(fd, buffer, 1);
    }
    free(buffer);
}

int get_this_line_size(vector_2 *map_size, int fd)
{
    static int line_size = 0;
    int cur_line_size = 0;
    char *buffer = malloc(sizeof(char) * 1);

    while (read(fd, buffer, 1) != 0 && buffer[0] != '\n') {
        cur_line_size++;
    }
    free (buffer);
    if (cur_line_size == 0)
        return (-1);
    if (line_size == 0) {
        line_size = cur_line_size;
        map_size->x = cur_line_size;
    } else if (line_size != cur_line_size)
        exit (84);
    map_size->y += 1;
    return (0);
}

vector_2 get_map_size(int ac, char **av, int *fd)
{
    vector_2 map_size;
    *fd = open(av[1], O_RDONLY);

    map_size.x = 0;
    map_size.y = 0;
    if (*fd == -1)
        exit (84);
    while (get_this_line_size(&map_size, *fd) != - 1);
    return (map_size);
}

void get_map(int ac, char **av)
{
    int fd = 0;
    vector_2 map_size = get_map_size(ac, av, &fd);

    solver.map_size = map_size;
    solver.map = create_array(map_size.x, map_size.y);
    solver.map = fill_array_with(solver.map, '.');
    lseek(fd, 0, SEEK_SET);
    fill_map(fd);
    close(fd);
}