/*
** EPITECH PROJECT, 2019
** my_printf
** File description:
** my_putstr_non_print
*/

#include "my.h"
#include <stdlib.h>
#include <unistd.h>

char *assign_to_str(int nbr, char *non_print);

char *my_put_to_norme(char *str);

int my_putstr_non_print(char *str)
{
    char bs = '\\';
    int conv_base;
    char *non_print = malloc(sizeof(char) * (3 + 1));
    non_print[3] = '\0';

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= ' ' && str[i] <= '~')
            write(1, &str[i], 1);
        else {
            write(1, &bs, 1);
            non_print = put_to_norme(non_print, 3);
            conv_base = my_conv_base(str[i], 8);
            non_print = assign_to_str(conv_base, non_print);
            my_putstr(non_print);
        }
    }
    free(non_print);
    return (0);
}

char *assign_to_str(int nbr, char *non_print)
{
    int start = 100;
    int tmp;
    int i = 0;

    while (start != 0)
    {
        tmp = nbr / start;
        non_print[i] = tmp % 10 + '0';
        start = start / 10;
        i++;
    }
    return (non_print);
}