/*
** EPITECH PROJECT, 2019
** my_printf
** File description:
** my_putbase_hexa
*/

#include <stdlib.h>

int findlenghtnbr_un(int nbr);

void my_putstrrev_un(char *str, int i);

int my_putbase_hexa(int nbr, int type)
{
    int tmp;
    int i = 0;
    char *hexa = malloc(sizeof(int) * findlenghtnbr_un(nbr) + 1);

    while (nbr != 0)
    {
        tmp = nbr % 16;
        if (tmp < 10)
            hexa[i] = tmp + '0';
        else
            hexa[i] = tmp + 'A' - 10 + (('a'-'A') * type);
        i++;
        nbr = nbr / 16;
    }
    my_putstrrev_un(hexa, i);
    free(hexa);
    return (0);
}