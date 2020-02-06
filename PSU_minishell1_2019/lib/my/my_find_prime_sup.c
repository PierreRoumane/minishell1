/*
** EPITECH PROJECT, 2019
** my_prime_sup.c
** File description:
** smallest prime number above parameter
*/

int my_is_prime(int nb);

int my_find_prime_sup(int nb)
{
    int i = nb;

    if (i == 0 || i == 1 || i < 0)
        return (-1);
    while (i <= nb)
    {
        if (my_is_prime(i) == 1)
            return (i);
        i++;
    }
    return (-1);
}
