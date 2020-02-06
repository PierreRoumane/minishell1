/*
** EPITECH PROJECT, 2019
** my_strcompare
** File description:
** compare if two strings are equal
*/

int my_strcompare(char const *s1, char const *s2)
{
    int i = 0;

    while (s1[i] != '\0' || s2[i] != '\0')
    {
        if (s1[i] != s2[i])
            return (1);
        i++;
    }
    if (s1[i] != s2[i])
        return (1);
    return (0);
}
