/*
** EPITECH PROJECT, 2022
** BSQ
** File description:
** bonus
*/

#include "../include/bsq.h"

void print_pattern_info(char **av)
{
    my_putstr("map size: ");
    my_putstr(av[1]);
    my_putstr("x");
    my_putstr(av[1]);
    my_putchar('\n');
    my_putstr("pattern: '");
    my_putstr(av[2]);
    my_putstr("'\n\n");
}

int bonus(bsq_t *bsq ,int ac, char **av)
{
    if (ac == 3 && my_str_isnum(av[1]) == 0 
        && my_str_is_valid_for_map(av[2]) == 0)
        print_pattern_info(av);
    for (int i = 2; av[i] != NULL; i++) {
        if (my_strcmp(av[i], "-b") == 0)
            bsq->color = BLUE;
        if (my_strcmp(av[i], "-r") == 0)
            bsq->color = RED;
        if (my_strcmp(av[i], "-g") == 0)
            bsq->color = GREEN;
        if (my_strcmp(av[i], "-y") == 0)
            bsq->color = YELLOW;
        if (my_strcmp(av[i], "-p") == 0)
            bsq->color = PURPLE;
    }
    return 0;
}
