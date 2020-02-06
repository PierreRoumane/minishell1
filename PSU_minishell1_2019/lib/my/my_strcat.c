/*
** EPITECH PROJECT, 2019
** my_strcat
** File description:
** str cat
*/

char *my_strcat(char *dest, char const *str)
{
    int i, j = 0;

    while (dest[i] != '\0')
        i++;
    while (str[j] != '\0')
    {
        dest[i] = str[j];
        j++;
        i++;
    }
    dest[i + 1] = '\0';
    return (dest);
}
