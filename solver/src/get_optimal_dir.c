/*
** EPITECH PROJECT, 2020
** get optimal dir
** File description:
** get the best direction to go
*/

#include "../include/my.h"

int try_other_dir(void)
{
    if (can_go_north() == 1)
        return (1);
    else if (can_go_west() == 1)
        return (4);
    else
        return (-1);
}

vector_2 get_dist_to_end(void)
{
    vector_2 dist;

    dist.x = solver.map_size.x - solver.parser.x;
    dist.y = solver.map_size.y - solver.parser.y;
    return (dist);
}

int get_optimal_dir(void)
{
    vector_2 dist_to_end = get_dist_to_end();

    if (dist_to_end.y < dist_to_end.x) {
        if (can_go_east() == 1)
            return (2);
        else if (can_go_south() == 1)
            return (3);
    } else {
        if (can_go_south() == 1)
            return (3);
        else if (can_go_east() == 1)
            return (2);
    }
    return (try_other_dir());
}