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

typedef struct tile_t
{
    int number;
    int north;
    int south;
    int east;
    int west;
}tile_t;

typedef struct solver_t
{
    vector_2 parser;
    vector_2 map_size;
    char **map;
    tile_t **int_map;
    int tile_nbr;
    int is_stuck;
}solver_t;

solver_t solver;

#endif /* !STRUCT_H_ */
