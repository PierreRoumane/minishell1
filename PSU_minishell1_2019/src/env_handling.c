/*
** EPITECH PROJECT, 2020
** minishell1
** File description:
** fct_handling.c
*/

#include <sys/wait.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

#include "my.h"
#include "minishell1.h"

void env_handling(char **env)
{
    for (int i = 0; env[i] != NULL; i++)
    {
        my_putstr(env[i]);
        my_putchar('\n');
    }
}