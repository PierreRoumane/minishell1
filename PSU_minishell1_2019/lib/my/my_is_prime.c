/*
** EPITECH PROJECT, 2019
** my_is_prime
** File description:
** 1 if prime 0 if not
*/

int my_is_prime(int nb)
{
    if (nb == 1 || nb == 0)
        return (0);
    for (int i = 2; i <= 9; i++)
    {
        if (nb % i == 0)
            return (1);
    }
    return (0);
}
