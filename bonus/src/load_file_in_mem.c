/*
** EPITECH PROJECT, 2022
** BSQ
** File description:
** load_file_in_mem
*/

#include "../include/bsq.h"
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>

char *load_file_in_mem(char const *filepath)
{
    int fd = open(filepath, O_RDONLY);
    if (fd == -1)
        return NULL;
    char *buffer = malloc(sizeof(char) * 100000000);
    int size = read(fd, buffer, 100000000);
    if (size == -1)
        return NULL;
    buffer[size] = '\0';
    return buffer;
}
