/*
** EPITECH PROJECT, 2020
** minishell1
** File description:
** setenv_handling.c
*/

#include <sys/wait.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

#include "my.h"
#include "minishell1.h"

int setenv_handling(char **env, char *line)
{
    int i;
    char **new_env;
    char **wordtab_line;

    if (error_handling_setenv(line, env) == -1)
        return (0);

    for (i = 0; env[i] != NULL; i++);
    new_env = (char **) malloc(sizeof(char *) * i + 2);
    cpy_tab(env, new_env);
    wordtab_line = my_str_to_wordtab(line);

    create_new_line(new_env[i], wordtab_line);
    return (0);
}

void cpy_tab(char **env, char **new_env)
{
    for (int i = 0; env[i] != NULL; i++)
    {
        new_env[i] = malloc(sizeof(char) * my_strlen(env[i]) + 1);
        new_env[i] = my_strcpy(new_env[i], env[i]);
        env[i] = new_env[i];
    }
}

int create_new_line(char *env, char **wordtab_line)
{
    int i;

    env = malloc(sizeof(char) *
    (my_strlen(wordtab_line[1]) + my_strlen(wordtab_line[2]) + 2));
    env[(my_strlen(wordtab_line[1]) + my_strlen(wordtab_line[2])) + 2] = '\0';
    for (i = 0; wordtab_line[1][i] != '\0'; i++)
        env[i] = wordtab_line[1][i];
    env[i] = EQUAL_SIGN;
    i++;
    for (i = i; wordtab_line[2][i] != '\0'; i++)
        env[i] = wordtab_line[2][i];
    return (0);
}

int error_handling_setenv(char *line, char **env)
{
    int space_counter = 0, i = 0;

    for (i = 0; line[i] != ' ' && line[i] != '\0'; i++);
    for (i = i; line[i] == ' ' && line[i] != '\0'; i++);
    if (line[i] == '\0') {
        env_handling(env);
        return (-1); }

    for (i = 0; line[i] == ' '; i++);
    for (i = i; line[i] != '\0'; i++)
        if (line[i] == ' ')
            space_counter++;
    if (space_counter > 2) {
        my_putstrerror("setenv: Too many arguments.\n");
        return (-1); }
    else if (space_counter == 0)
        env_handling(env);
    return (0);
}