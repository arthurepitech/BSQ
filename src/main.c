/*
** EPITECH PROJECT, 2022
** BSQ
** File description:
** main
*/

#include "../include/bsq.h"

int main(int ac, char **av)
{
    if (my_strcmp(av[1], "-h") == 0)
        return print_help();
    if (ac == 1 || ac > 3)
        return 84;
    return bsq(ac, av);
}
