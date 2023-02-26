/*
** EPITECH PROJECT, 2022
** BSQ
** File description:
** generate_map
*/

#include "../include/bsq.h"

int my_str_is_valid_for_map(char *str)
{
    int count = 0;
    if (str == NULL || str[0] == '\0')
        return 84;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == '.' || str[i] == 'o')
            count++;
    }
    if (count == my_strlen(str))
        return 0;
    return 84;
}

void get_char_to_print(bsq_t * bsq, int x, int y)
{
    bsq->map[x][y] = bsq->generation_path[bsq->i];
    bsq->i++;
    if (bsq->i >= my_strlen(bsq->generation_path))
        bsq->i = 0;
}

int create_map(bsq_t *bsq)
{
    for (int x = 0; x != bsq->nb_rows; x++) {
        for (int y = 0; y != bsq->nb_cols; y++) {
            get_char_to_print(bsq, x, y);
        }
    }
    return 0;
}

int generate_map(bsq_t *bsq, char **av)
{
    if (my_str_isnum(av[1]) == 84
        || my_str_is_valid_for_map(av[2]) == 84)
        return 84;
    bsq->generation_path = av[2];
    bsq->nb_cols = my_getnbr(av[1]);
    bsq->nb_rows = my_getnbr(av[1]);
    bsq->map = mem_alloc_2d_array(bsq->nb_cols, bsq->nb_rows);
    return create_map(bsq);
}
