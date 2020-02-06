/*
** EPITECH PROJECT, 2019
** my_printf
** File description:
** my_conv_base
*/

#include "my.h"

#include <stdlib.h>

int guess_nbr_base(int nbr, int base);

int my_conv_base(int nbr, int base)
{
    int originalnbr = nbr;
    int end = guess_nbr_base(nbr, base);
    int result;

    char *str = malloc(sizeof(char) * (end + 1));
    str[end] = '\0';
    end--;

    while (originalnbr != 0)
    {
        str[end] = originalnbr % base + '0';
        originalnbr = originalnbr / base;
        end--;
    }
    result = my_getnbr(str);
    free(str);
    return (result);
}