/*
** EPITECH PROJECT, 2019
** my_putstrerror
** File description:
** put on error channel
*/

#include <unistd.h>

int my_putstrerror(char *str)
{
    for (int i = 0; str[i] != '\0'; i++)
        write(2, &str[i], 1);
    return (0);
}
