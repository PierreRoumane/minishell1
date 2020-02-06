/*
** EPITECH PROJECT, 2020
** minishell1
** File description:
** command.c
*/

#include <sys/wait.h>
#include <signal.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

#include "my.h"
#include "minishell1.h"

int prepare_command(char *command, char **tab_command, char *path)
{
    char **path_tab = my_path_to_wordtab(path);
    for (int i = 0; path_tab[i] != NULL; i++)
        my_putstr(path_tab[i]);
    for (int i = 0; tab_command[i] != NULL; i++)
        my_putstr(tab_command[i]);
    return (0);
}

char *get_path(char **env)
{
    int i;

    for (i = 0; my_str_compare(env[i], "PATH ") != 0; i++);
    return (env[i]);
}

int compare_command(char *line, char *to_compare)
{
    int i;

    for (i = 0; line[i] == ' ' && line[i] != '\0'; i++);
    return (my_str_compare(&line[i], to_compare));
    return (84);
}