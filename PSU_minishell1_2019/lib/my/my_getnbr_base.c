/*
** EPITECH PROJECT, 2019
** my_getnbr_base
** File description:
** get the nbr and convert it
*/

#include <stdlib.h>

#include "my.h"

int guess_nbr_base(int nbr, int base);

int my_getnbr_base(int nbr, int base)
{
    int originalnbr = nbr;
    int end = guess_nbr_base(nbr, base);

    char *str = malloc(sizeof(char) * (end + 1));
    str[end] = '\0';
    end--;

    while (originalnbr != 0)
    {
        str[end] = originalnbr % base + '0';
        originalnbr = originalnbr / base;
        end--;
    }
    my_putstr(str);
    free(str);
    return (0);
}

int guess_nbr_base(int nbr, int base)
{
    int i;

    for (i = 0; nbr != 0; i++)
        nbr = nbr / base;
    return (i);
}