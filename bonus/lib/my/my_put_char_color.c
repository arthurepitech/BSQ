/*
** EPITECH PROJECT, 2022
** BSQ
** File description:
** my_put_char_color
*/

#include "../../include/my.h"

void my_put_char_blue(char c)
{
    my_putstr("\033[1;34m");
    my_putchar(c);
    my_putstr("\033[0m");
}

void my_put_char_red(char c)
{
    my_putstr("\033[1;31m");
    my_putchar(c);
    my_putstr("\033[0m");
}

void my_put_char_green(char c)
{
    my_putstr("\033[1;32m");
    my_putchar(c);
    my_putstr("\033[0m");
}

void my_put_char_yellow(char c)
{
    my_putstr("\033[1;33m");
    my_putchar(c);
    my_putstr("\033[0m");
}

void my_put_char_purple(char c)
{
    my_putstr("\033[1;35m");
    my_putchar(c);
    my_putstr("\033[0m");
}
