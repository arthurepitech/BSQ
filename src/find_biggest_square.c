/*
** EPITECH PROJECT, 2022
** BSQ
** File description:
** find_biggest_square
*/

#include "../include/bsq.h"

void check_square(bsq_t *bsq, int x, int y)
{
    bsq->sq.current_square_size = 0;
    while (is_square_of_size(bsq, x, y) == 1) {
        bsq->sq.current_square_size++;
        if (bsq->map[x][y] == 'o')
            return;
        if (bsq->sq.current_square_size > bsq->nb_rows - x
            && bsq->sq.current_square_size > bsq->nb_cols - y)
            return;
        if (bsq->sq.biggest_square_size < bsq->sq.current_square_size) {
            bsq->sq.biggest_square_size = bsq->sq.current_square_size;
            bsq->sq.pos_row = x;
            bsq->sq.pos_col = y;
        }
    }
    return;
}

void check_if_good_char(bsq_t *bsq, int x, int y)
{
    if (bsq->map[x][y] == '.'
        && bsq->sq.biggest_square_size < bsq->nb_cols - y)
        check_square(bsq, x, y);
    return;
}

int find_biggest_square(bsq_t *bsq)
{
    for (int x = 0; x < bsq->nb_rows; x++) {
        if (bsq->sq.biggest_square_size > bsq->nb_rows - x)
            return 0;
        for (int y = 0; y < bsq->nb_cols; y++) {
            check_if_good_char(bsq, x, y);
        }
    }
    return 0;
}
