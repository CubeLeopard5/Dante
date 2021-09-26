/*
** EPITECH PROJECT, 2020
** functions
** File description:
** functions
*/

#include "struct.h"

#ifndef FUNCTIONS_H_
#define FUNCTIONS_H_

int am_i_stuck(perfect_maze_t *maze);
int check_intersection_east(perfect_maze_t *maze, int direction);
int check_intersection_north(perfect_maze_t *maze, int direction);
int check_intersection_south(perfect_maze_t *maze, int direction);
int check_intersection_weast(perfect_maze_t *maze, int direction);
int condition_east1(perfect_maze_t *maze, int direction);
int condition_east2(perfect_maze_t *maze, int direction);
int condition_east3(perfect_maze_t *maze, int direction);
int condition_east4(perfect_maze_t *maze, int direction);
int condition_north1(perfect_maze_t *maze, int direction);
int condition_north2(perfect_maze_t *maze, int direction);
int condition_north3(perfect_maze_t *maze, int direction);
int condition_north4(perfect_maze_t *maze, int direction);
int condition_south1(perfect_maze_t *maze, int direction);
int condition_south2(perfect_maze_t *maze, int direction);
int condition_south3(perfect_maze_t *maze, int direction);
int condition_south4(perfect_maze_t *maze, int direction);
int condition_west1(perfect_maze_t *maze, int direction);
int condition_west2(perfect_maze_t *maze, int direction);
int condition_west3(perfect_maze_t *maze, int direction);
int condition_west4(perfect_maze_t *maze, int direction);
void find_path(perfect_maze_t *maze);
void generate_imperfect_maze(perfect_maze_t *maze, int x, int y);
void generate_perfect_maze(perfect_maze_t *maze, int x, int y);
void go_back(perfect_maze_t *maze);
void go_next_case(perfect_maze_t *maze, int dir);
void init_struct(perfect_maze_t *maze, int x, int y);
int is_path_valid(perfect_maze_t *maze, int direction);
void maze_gen_algo(perfect_maze_t *maze, int x, int y);
void print_maze(perfect_maze_t *maze);

#endif /* !FUNCTIONS_H_ */
