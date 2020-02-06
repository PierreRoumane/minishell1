/*
** EPITECH PROJECT, 2019
** my_strstr
** File description:
** haystacks and needles
*/

char *my_strstr(char *str, char const *to_find);

char *my_strstr(char *str, char const *to_find)
{
    char *needle;
    int iteratorneedle = 0;

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == to_find[iteratorneedle])
        {
            needle = &str[i];
            while (str[i] == to_find[iteratorneedle] && str[i] != '\0') {
                i++;
                iteratorneedle++;
            }
            if (to_find[iteratorneedle] == '\0')
                return (needle);
            else
                iteratorneedle = 0;
        }
    }
    return (0);
}
