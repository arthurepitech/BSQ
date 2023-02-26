/*
** EPITECH PROJECT, 2022
** BSQ
** File description:
** bsq
*/

#include "../include/bsq.h"

int bsq(int ac, char **av)
{
    bsq_t *bsq = malloc(sizeof(bsq_t));
    init_structure(bsq);
    if (ac == 2)
        get_map(av[1], bsq);
    else
        generate_map(bsq, av);
    if (bsq->map == NULL)
        return 84;
    find_biggest_square(bsq);
    print_bsq(bsq);
    free(bsq->map);
    free(bsq);
    return 0;
}
