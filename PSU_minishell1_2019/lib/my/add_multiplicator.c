/*
** EPITECH PROJECT, 2019
** add_multiplicator
** File description:
** add +1 to str
*/

int my_strlen(char *str);

int add_multiplicator(char *str)
{
    int i  = my_strlen(str) - 1;

    str[i] = str[i] + 1;

    while (i > 0)
    {
        if (str[i] > '9') {
            str[i] = '0';
            str[i - 1] = str[i - 1] + 1;
        }
        i--;
    }
    return (-1);
}
