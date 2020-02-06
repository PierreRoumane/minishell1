/*
** EPITECH PROJECT, 2020
** minishell1.c
** File description:
** main.c
*/

#include <sys/wait.h>
#include <signal.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

#include "my.h"
#include "minishell1.h"

int main(int argc, char **argv, char **env)
{
    char **tab;
    char *lineptr = malloc(sizeof(char) * 10);
    size_t n = (int) 10;
    int child_pid;

    if (argc > 1)
        my_putstrerror("no flags\n");

    while (1 || argv[0][0] == 'm') {
        my_putstr("$>");
        getline(&lineptr, &n, stdin);
        my_putstr(lineptr);
        tab = my_str_to_wordtab(lineptr);
        for (int i = 0; tab[i] != NULL; i++)
        {
            my_putstr(tab[i]);
            my_putchar('\n');
        }
        /*
        if (prepare_command(lineptr, tab, get_path(env)) != 0) {
            child_pid = fork();
            if (child_pid == 0)
                execv(my_strcat(get_path(env), tab[0]), &tab[1]);
            free(tab); }
        else
            child_process(lineptr, env);
        if (signal(SIGINT, sighandler))
            return (0);
        */
       break;

    }
    return (0);
}

/*
-Parsing de ta commande. Dans une boucle.
-Verif (is_build-in ou is-exec)
-Execute (si built-in)
-Sinon -> exec
-
*/

int child_process(char *lineptr, char **env)
{
    if (compare_command(lineptr, "env") == 0)
        env_handling(env);
    else if (compare_command(lineptr, "exit") == 0) {
        my_putstr("exit\n");
        return (-1);}
    else if (compare_command(lineptr, "setenv") == 0)
        setenv_handling(env, lineptr);
    else {
        my_putstrerror(my_str_to_wordtab(lineptr)[0]);
        my_putstrerror(": Command not found\n"); }
    free(lineptr);
    return (0);
}

void sighandler(int handler)
{
    handler = handler;
}