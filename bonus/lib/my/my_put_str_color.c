/*
** EPITECH PROJECT, 2022
** LIBMY
** File description:
** my_put_str_color
*/

#include "../../include/my.h"

void my_put_str_blue(char *str)
{
    my_putstr("\033[1;34m");
    my_putstr(str);
    my_putstr("\033[0m");
}

void my_put_str_red(char *str)
{
    my_putstr("\033[1;31m");
    my_putstr(str);
    my_putstr("\033[0m");
}

void my_put_str_green(char *str)
{
    my_putstr("\033[1;32m");
    my_putstr(str);
    my_putstr("\033[0m");
}

void my_put_str_yellow(char *str)
{
    my_putstr("\033[1;33m");
    my_putstr(str);
    my_putstr("\033[0m");
}

void my_put_str_purple(char *str)
{
    my_putstr("\033[1;35m");
    my_putstr(str);
    my_putstr("\033[0m");
}
