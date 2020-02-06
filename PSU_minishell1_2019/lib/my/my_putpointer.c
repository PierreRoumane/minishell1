/*
** EPITECH PROJECT, 2019
** my_putpointer
** File description:
** display the adress of a pointer
*/

#include <stdlib.h>
#include <stddef.h>
#include <unistd.h>

#include "my.h"

size_t convert_to_hexa_un(size_t nbr);

void	my_putstrrev_un(char *str, size_t i);

size_t findlenghtnbr_un(size_t nbr);

void my_putpointer(size_t p)
{
    my_putstr("0x");
    convert_to_hexa_un(p);
}

size_t convert_to_hexa_un(size_t nbr)
{
    int tmp;
    int i = 0;
    char *hexa = malloc(sizeof(size_t) * findlenghtnbr_un(nbr) + 1);

    while (nbr != 0)
    {
        tmp = nbr % 16;
        if (tmp < 10)
            hexa[i] = tmp + '0';
        else
            hexa[i] = tmp + 'a' - 10;
        i++;
        nbr = nbr / 16;
    }
    my_putstrrev_un(hexa, i);
    free(hexa);
    return (0);
}

void	my_putstrrev_un(char *str, size_t i)
{
    while (i != 0)
    {
        i--;
        write(1, &str[i], 1);
    }
}

size_t findlenghtnbr_un(size_t nbr)
{
    while (nbr != 0)
    nbr = nbr / 16;
    return (nbr);
}