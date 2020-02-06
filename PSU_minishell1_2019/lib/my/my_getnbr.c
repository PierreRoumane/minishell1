/*
** EPITECH PROJECT, 2019
** my_getnbr
** File description:
** getnbr
*/

#include "my.h"

bool check_operator(char const *str);

int my_getnbr(char const *str);

int into_the_loop(const char *str, int nbr);

int my_getnbr(char const *str)
{
    int nbr = 0;
    bool ope = true;

    ope = check_operator(str);
    nbr = into_the_loop(str, nbr);

    if (ope == false)
        nbr = nbr * (-1);
    return (nbr);
}

bool check_operator(char const *str)
{
    int i = 0;
    bool check = true;

    while (str[i] != '\0')
    {
        if (str[i] == '-' && check == false)
            check = true;
        else if (str[i] == '-' && check == true)
            check = false;
        i++;
    }
    return (check);
}

int into_the_loop(const char *str, int nbr)
{
    int i = 0;

    while (str[i] != '\0')
    {
        if (str[i] > '0' && str[i] < '9')
            {
                nbr = nbr * 10 + (str[i] - '0');
                if (str[i + 1] < '0' || str[i + 1] > '9')
                    return (nbr);
            }
        i++;
    }
    return (nbr);
}
