/*
** EPITECH PROJECT, 2020
** minishell1
** File description:
** minishell1.h
*/

#include <stdbool.h>

//(' = ')
#define EQUAL_SIGN (61)

typedef struct flags_t {
    bool b;
    bool c;
    bool d;
    bool e;
    bool f;
    bool F;
    bool i;
    bool l;
    bool m;
    bool n;
    bool q;
} flags_s;

//main.c
int child_process(char *lineptr, char **env);
int compare_command(char *line, char *to_compare);
void sighandler(int handler);

//fct_misc.c
int my_strlen_command(char *command);
char *cpy_command(char *line);

//env_handling.c
void env_handling(char **env);

//setenv_handling.c
int setenv_handling(char **env, char *line);
void cpy_tab(char **env, char **new_env);
int error_handling_setenv(char *line, char **env);
int create_new_line(char *env, char **wordtab_line);

//command.c
int prepare_command(char *command, char **tab_command, char *path);
char *get_path(char **env);