/*
** EPITECH PROJECT, 2020
** lib
** File description:
** my_str_to_wordtab.c
*/

#include <stdlib.h>

#include "my.h"

void create_board(char **wordtab, char *str);

char **my_str_to_wordtab(char *str)
{
    char **wordtab;
    int counter = 0, tmp = 0;
    for (int i = 0; str[i] != '\0'; i++) //crée avec le nbr d'espaces (refaire)
        if (str[i] == ' ' || str[i] == '\n')
            counter++;
    wordtab = malloc(sizeof(char *) * (counter + 1)); //malloc
    counter = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ' || str[i] == '\n') {      //problème si non espaces, reglé si \n?
            wordtab[counter] = malloc(sizeof(char) * (tmp + 1));
            counter++;
            tmp = 0; }
        else
            tmp++; }
    if (tmp != 0)
        wordtab[counter] = malloc(sizeof(char) * (tmp + 1));
    create_board(wordtab, str);
    return (wordtab);
}

void create_board(char **wordtab, char *str)
{
    int counter = 0;

    for (int i = 0; wordtab[counter] != NULL; i++) {
        if (str[i] == ' ' || str[i] == '\n') {
            wordtab[counter][i] = '\0';
            counter++;
            i = 0;
        }
        else
            wordtab[counter][i] = str[i];
    }
}