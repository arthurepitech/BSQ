/*
** EPITECH PROJECT, 2022
** BSQ
** File description:
** init_structure
*/

#include "../include/bsq.h"

void init_structure(bsq_t *bsq)
{
    bsq->map = NULL;
    bsq->nb_rows = 0;
    bsq->nb_cols = 0;
    bsq->sq.pos_row = 0;
    bsq->sq.pos_col = 0;
    bsq->sq.biggest_square_size = 0;
    bsq->sq.current_square_size = 0;
    bsq->generation_path = NULL;
    bsq->i = 0;
    bsq->empty = '.';
    bsq->obstacle = 'o';
    bsq->here = 'x';
    bsq->color = 0;
}
