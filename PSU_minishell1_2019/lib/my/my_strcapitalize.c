/*
** EPITECH PROJECT, 2019
** my_strcapitalize
** File description:
** capitalize
*/

char *my_strcapitalize(char *str)
{
    int i = 0;

    while (str[i] != '\0')
    {
        if (str[i] >= 'a' && str[i] <= 'z')
            str[i] = str[i - 32];
    }
    return (str);
}
