/*
** EPITECH PROJECT, 2019
** my_getsign
** File description:
** get the sign of a int str
*/

#include "my.h"

bool my_getsign(char *str)
{
    int i = 0;
    bool sign = true;

    while (str[i] < '0' || str[i] > '9')
    {
        if (str[i] == '-' && sign == true)
            sign = false;
        else if (str[i] == '-' && sign == false)
            sign = true;
        i++;
    }
    return (sign);
}