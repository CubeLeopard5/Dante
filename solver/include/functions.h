/*
** EPITECH PROJECT, 2020
** functions
** File description:
** functions
*/

#include "struct.h"

#ifndef FUNCTIONS_H_
#define FUNCTIONS_H_

int can_go_north(void);
int can_go_south(void);
int can_go_east(void);
int can_go_west(void);

int can_go_back_north(void);
int can_go_back_east(void);
int can_go_back_west(void);
int can_go_back_south(void);

void free_map(char **array);
void get_int_map(void);
void get_map(int ac, char **av);
int get_optimal_dir(void);

void go_north(void);
void go_south(void);
void go_east(void);
void go_west(void);
void go_back(void);
void go_back_north(void);

void go_next_tile(void);
void solver_algo(void);



#endif /* !FUNCTIONS_H_ */
