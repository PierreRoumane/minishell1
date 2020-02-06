/*
** EPITECH PROJECT, 2019
** put_to_norme
** File description:
** fill with 0 till malloc
*/

char *put_to_norme(char *str, int malloc)
{
    int i = 0;

    while (i < malloc)
    {
        str[i] = '0';
        i++;
    }
    return (str);
}