/*
** EPITECH PROJECT, 2022
** BSQ
** File description:
** print_help
*/

#include "../include/bsq.h"

int print_help(void)
{
    my_putstr("USAGE\n");
    my_putstr("    ./bsq map.txt\n\n");
    my_putstr(" or ./bsq [NUMBER] [PATTERN]\n\n\n");
    my_putstr("DESCRIPTION\n");
    my_putstr("    map.txt    file representing the warehouse map");
    my_putstr(", containing\n    '.' for an empty space\n");
    my_putstr("    'o' for an obstacle\n");
    my_putstr("    'x' for the part of the warehouse");
    my_putstr("    where the boxes can be stored\n\n");
    my_putstr(" or [NUMBER]   number of lines and rows of the ");
    my_putstr("warehouse map\n    [PATTERN]  pattern of the warehouse map\n");
    my_putstr("    '.' for an empty space\n");
    my_putstr("    'o' for an obstacle\n");
    my_putstr("    example: ./bsq 10 '...ooo...' \n");
    return 0;
}
