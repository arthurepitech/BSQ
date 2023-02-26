/*
** EPITECH PROJECT, 2022
** BSQ
** File description:
** print_bsq
*/

#include "../include/bsq.h"
#include <unistd.h>

int print_bsq(bsq_t *bsq)
{
    for (int x = bsq->sq.pos_row; x < bsq->sq.pos_row
        + bsq->sq.biggest_square_size; x++) {
        for (int y = bsq->sq.pos_col; y < bsq->sq.pos_col
            + bsq->sq.biggest_square_size; y++) {
            bsq->map[x][y] = 'x';
        }
    }
    for (int i = 0; i != bsq->nb_rows; i++) {
        write(1, bsq->map[i], bsq->nb_cols);
        my_putchar('\n');
    }
    return 0;
}
