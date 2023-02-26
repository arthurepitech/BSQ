/*
** EPITECH PROJECT, 2022
** BSQ
** File description:
** bsq
*/

#include "../include/bsq.h"

void print_info(bsq_t *bsq)
{
    my_putstr("\nMap size : ");
    my_put_nbr(bsq->nb_rows);
    my_putstr(" lines and ");
    my_put_nbr(bsq->nb_cols);
    my_putstr(" columns\n");
    my_putstr("The biggest square has a size of ");
    my_put_nbr(bsq->sq.biggest_square_size);
    my_putstr(" and is located at (");
    my_put_nbr(bsq->sq.pos_row);
    my_putstr(", ");
    my_put_nbr(bsq->sq.pos_col);
    my_putstr(")\n");
}

int bsq(int ac, char **av)
{
    bsq_t *bsq = malloc(sizeof(bsq_t));
    init_structure(bsq);
    bonus(bsq, ac, av);
    if (my_str_isnum(av[1]) == 84)
        get_map(av[1], bsq);
    else
        generate_map(bsq, av);
    if (bsq->map == NULL)
        return 84;
    find_biggest_square(bsq);
    print_bsq(bsq);
    print_info(bsq);
    free(bsq);
    return 0;
}
