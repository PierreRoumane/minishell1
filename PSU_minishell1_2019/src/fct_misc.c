/*
** EPITECH PROJECT, 2020
** minishell1
** File description:
** fct_misc.c
*/

#include <sys/wait.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

#include "my.h"
#include "minishell1.h"

int my_strlen_command(char *command)
{
    int i;
    int lenght;

    for (i = 0; command[i] != ' '; i++);
    i++;
    for (i = i; command[i] != '\0' &&
    (command[i] != ' ' || command[i] != EQUAL_SIGN); i++)
        lenght++;
    return (lenght);
}