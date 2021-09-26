/*
** EPITECH PROJECT, 2020
** go next tile
** File description:
** go to the next tile
*/

#include "../include/my.h"

void go_next_tile(void)
{
    int optimal_dir = get_optimal_dir();

    switch (optimal_dir)
    {
    case 1:
        go_north();
        break;
    case 2:
        go_east();
        break;
    case 3:
        go_south();
        break;
    case 4:
        go_west();
        break;
    default:
        solver.is_stuck = 1;
        break;
    }
}