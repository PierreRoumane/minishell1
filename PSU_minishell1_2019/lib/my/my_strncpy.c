/*
** EPITECH PROJECT, 2019
** my_strcpy
** File description:
** cpy str to str
*/

char *my_strncpy(char *dest, char const *src, int n)
{
    int i = 0;
    while (i != n && dest[i] != '\0' && src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}
