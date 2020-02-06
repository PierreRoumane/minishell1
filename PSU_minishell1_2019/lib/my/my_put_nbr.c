/*
** EPITECH PROJECT, 2019
** my_putnbr
** File description:
** write a nbr
*/

void my_putchar(char c);

int guess_lenght_nbr(int nbr);

int power_10(int power);

int my_put_nbr(int nbr)
{
    int  tmp;
    int  power = 0;

    if (nbr < 0)
    {
        nbr = nbr * (-1);
        my_putchar('-');
    }
    power = guess_lenght_nbr(nbr);
    tmp = nbr;
    power = power_10(power);
    while (power != 0)
    {
        if (tmp >= 10)
            tmp = tmp / power;
        my_putchar((tmp % 10) + '0');
        power = power / 10;
        tmp = nbr;
    }
    return (0);
}

int guess_lenght_nbr(int nbr)
{
    int i = 0;

    while (nbr >= 10)
        {
            nbr = nbr / 10;
            i = i + 1;
        }
    return (i);
}

int power_10(int power)
{
    int puissance = 1;

    while (power != 0)
    {
        puissance = puissance * 10;
        power = power - 1;
    }
    return (puissance);
}
