/*
** EPITECH PROJECT, 2019
** my_putstr
** File description:
** put a str
*/

#include <unistd.h>

#include "my.h"

int my_putstr(char *str)
{
    write(1, str, my_strlen(str));
    return (0);
}

