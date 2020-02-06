/*
** EPITECH PROJECT, 2019
** my_strncat
** File description:
** n cat
*/

char *my_strncat(char *dest, char *src, int nb)
{
    int i, j = 0;

    while (dest[i] != '\0')
        i++;
    while (j != nb && dest[j] != '\0' && src[j] != '\0')
    {
        dest[i] = src[j];
        j++;
        i++;
    }
    dest[i + 1] = '\0';
    return (dest);
}
