/*
** EPITECH PROJECT, 2022
** BSQ
** File description:
** print_bsq
*/

#include "../include/bsq.h"
#include <unistd.h>

void get_color_to_print(char c, int color)
{
    if (color == BLUE)
        my_put_char_blue(c);
    if (color == RED)
        my_put_char_red(c);
    if (color == GREEN)
        my_put_char_green(c);
    if (color == YELLOW)
        my_put_char_yellow(c);
    if (color == PURPLE)
        my_put_char_purple(c);
}

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
        for (int j = 0; j != bsq->nb_cols; j++) {
            if (bsq->map[i][j] == 'x' && bsq->color != 0)
                get_color_to_print(bsq->map[i][j], bsq->color);
            else
                write(1, &bsq->map[i][j], 1);
        }
        my_putchar('\n');
    }
    return 0;
}
