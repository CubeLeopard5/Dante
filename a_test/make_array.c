/*
** EPITECH PROJECT, 2020
** dfghjk
** File description:
** dfghjk
*/

#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>
#include "signal.h"
#include "sys/stat.h"
#include "sys/types.h"
#include "unistd.h"

char **create_array(char **array, char *buffer, int nb_line, int nb_column)
{
    int tmp = 0;

    array = malloc(sizeof(char *) * nb_line);
    for (int i = 0; i < nb_line; i++)
        array[i] = malloc(sizeof(char) * nb_column);
    for (int i = 0; i < nb_line; i++, tmp++)
        for (int j = 0; j < nb_column; j++, tmp++)
            array[i][j] = buffer[tmp];
    return (array);
}

int find_nb_column(char *buffer)
{
    int nb = 0;

    for (; buffer[nb] != '\n'; nb++);
    return (nb);
}

int find_nb_line(char *buffer)
{
    int nb = 0;

    for (int i = 0; buffer[i] != '\0'; i++)
        if (buffer[i] == '\n')
            nb++;
    return (nb);
}

char *my_read(char **av)
{
    int fd = 0;
    int size;
    struct stat st;
    char *buffer;

    stat(av[1], &st);
    buffer = malloc(sizeof(char *) * st.st_size);
    fd = open(av[1], O_RDONLY);
    if (fd == -1)
        return (NULL);
    size = read(fd, buffer, st.st_size + 1);
    buffer[st.st_size] = '\0';
    close (fd);
    return (buffer);
}

void print_array(char **array, int nb_line, int nb_column)
{
    for (int i = 0; i < nb_line; i++) {
        for (int j = 0; j < nb_column; j++)
            printf("%c", array[i][j]);
        printf("\n");
    }
}