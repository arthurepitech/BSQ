/*
** EPITECH PROJECT, 2022
** BSQ
** File description:
** is_square_of_size
*/

#include "../include/bsq.h"

int check_obstacle(bsq_t *bsq, int x, int y, int i)
{
    for (int j = 0; j <= bsq->sq.current_square_size; j++) {
        if (bsq->map[x + i][y + j] == 'o')
            return 0;
    }
    return 1;
}

int is_square_of_size(bsq_t *bsq, int x, int y)
{
    if (bsq->map[x][y] == 'o')
        return 0;
    if (x + bsq->sq.current_square_size >= bsq->nb_rows
        || y + bsq->sq.current_square_size >= bsq->nb_cols)
        return 0;
    for (int i = 0; i <= bsq->sq.current_square_size; i++) {
        if (check_obstacle(bsq, x, y, i) == 0)
            return 0;
    }
    return 1;
}
