/*
** EPITECH PROJECT, 2019
** my_cpy_from
** File description:
** cpy from a parameter in a string
*/

int my_cpy_from(char *to_copy, char *str, int from)
{
    int i = 0;

    while (str[from] != '\0')
    {
        str[from] = to_copy[i];
        i = i + 1;
        from = from + 1;
    }
    to_copy[from] = '\0';

    return (0);
}
