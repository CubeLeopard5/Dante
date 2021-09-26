/*
** EPITECH PROJECT, 2020
** struct.h
** File description:
** struct.h
*/

#ifndef STRUCT_H_
#define STRUCT_H_

typedef struct vector_2
{
    int x;
    int y;
}vector_2;

typedef struct vector_max_2
{
    int x_max;
    int y_max;
}vector_max_2;

typedef struct tile_t
{
    int number;
    int north;
    int south;
    int east;
    int west;
}tile_t;

typedef struct perfect_maze_t
{
    vector_2 parser;
    vector_max_2 parser_max;
    char **ascii_array;
    tile_t **tile_array;
    int til_nbr;
}perfect_maze_t;

#endif /* !STRUCT_H_ */
