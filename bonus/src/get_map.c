/*
** EPITECH PROJECT, 2022
** BSQ
** File description:
** get_map
*/

#include "../include/bsq.h"

int get_map(char *filepath, bsq_t *bsq)
{
    bsq->map = load_2d_array_from_file(filepath, bsq);
    if (bsq->map == NULL)
        return 84;
    return 0;
}
