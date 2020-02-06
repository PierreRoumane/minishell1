/*
** EPITECH PROJECT, 2019
** my_isneg
** File description:
** positive or negative
*/

void my_putchar(char c);

int my_isneg(int n)
{
    if (n >= 0)
        my_putchar('P');
    if (n < 0)
        my_putchar('N');
    return (0);
}
