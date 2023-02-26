/*
** EPITECH PROJECT, 2022
** BSQ
** File description:
** mem_alloc_2d_array
*/

#include "../include/my.h"
#include <stdlib.h>

char **mem_alloc_2d_array(int nb_rows, int nb_cols)
{
    char **result = malloc(sizeof(char *) * nb_rows);
    for (int i = 0; i < nb_rows; i++)
        result[i] = malloc(sizeof(char) * nb_cols + 1);
    return result;
}
