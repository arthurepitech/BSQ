/*
** EPITECH PROJECT, 2022
** BSQ
** File description:
** load_2d_array_from_file
*/

#include "../include/bsq.h"

char **my_str_to_map(bsq_t *bsq, char *buffer)
{
    char **result = mem_alloc_2d_array(bsq->nb_rows + 1, bsq->nb_cols + 1);
    int x = 0;
    int y = 0;
    for (int i = 0; buffer[i] != '\0'; i++) {
        if (buffer[i] != '.' && buffer[i] != 'o' && buffer[i] != '\n')
            return NULL;
        if (buffer[i] == '\n') {
            result[x][y] = '\0';
            x++;
            y = 0;
        } else {
            result[x][y] = buffer[i];
            y++;
        }
    }
    result[x] = NULL;
    return result;
}

char *del_first_line_of_array(char *buffer)
{
    int i = 0;
    for (; buffer[i] != '\n'; i++);
    buffer = &buffer[i + 1];
    return buffer;
}

char **load_2d_array_from_file(char const *filepath, bsq_t *bsq)
{
    int nbr_of_lines = -1;
    char *buffer = load_file_in_mem(filepath);
    if (buffer == NULL || buffer[0] == '\0')
        return NULL;
    bsq->nb_rows = get_size_rows(buffer);
    bsq->nb_cols = get_size_cols(buffer);
    for (int i = 0; buffer[i] != '\0'; i++) {
        if (buffer[i] == '\n')
            nbr_of_lines++;
    }
    if (bsq->nb_rows == -1 || bsq->nb_rows != nbr_of_lines)
        return NULL;
    buffer = del_first_line_of_array(buffer);
    return my_str_to_map(bsq, buffer);
}
