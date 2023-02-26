/*
** EPITECH PROJECT, 2022
** BSQ
** File description:
** get_size_of_map
*/

#include "../include/my.h"
#include <stddef.h>
#include <stdlib.h>

int get_size_rows(char *file_content)
{
    int i = 0;
    char *number_of_rows = malloc(sizeof(char) * my_strlen(file_content));
    for (; file_content[i] != '\n'; i++) {
        if (file_content[i] <= '0' && file_content[i] >= '9')
            return -1;
        number_of_rows[i] = file_content[i];
    }
    number_of_rows[i] = '\0';
    return my_getnbr(number_of_rows);
}

int get_size_cols(char *file_content)
{
    int i = 0;
    int nb_cols = 0;
    for (; file_content[i] != '\n'; i++);
    i++;
    for (; file_content[i] != '\n'; i++, nb_cols++);
    return nb_cols;
}
