/*
** EPITECH PROJECT, 2020
** minishell
** File description:
** my_path_to_wordtab.c
*/

#include <stdlib.h>

#include "minishell1.h"
#include "my.h"

void create_tab(char **wordtab, char *str);

char **my_path_to_wordtab(char *str)
{
    char **wordtab;
    int counter = 0, tmp = 0;
    for (int i = 0; str[i] != '\0'; i++)
        if (str[i] == EQUAL_SIGN || str[i] == ':')
            counter++;
    wordtab = malloc(sizeof(char *) * (counter + 2));
    wordtab[counter + 1] = NULL;
    counter = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == EQUAL_SIGN || str[i] == ':') {
            wordtab[counter] = malloc(sizeof(char) * (tmp + 1));
            counter++;
            tmp = 0;
        }
        else
            tmp++; }
    if (tmp != 0)
        wordtab[counter] = malloc(sizeof(char) * (tmp + 1));
    create_tab(wordtab, str);
    return (wordtab);
}

void create_tab(char **wordtab, char *str)
{
    int counter = 0;

    for (int i = 0; wordtab[counter] != NULL; i++) {
        if (str[i] == EQUAL_SIGN || str[i] == ':') {
            wordtab[counter][i] = '\0';
            counter++;
            i = 0;
        }
        else
            wordtab[counter][i] = str[i];
    }
}