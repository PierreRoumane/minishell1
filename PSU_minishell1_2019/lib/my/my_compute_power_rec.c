/*
** EPITECH PROJECT, 2019
** my_compute_power_rec
** File description:
** power
*/

int my_compute_power_rec(int nb, int p)
{
    int originalnb = nb;
    if (p == 0)
        return (1);
    if (p < 0)
        return (0);
    if (p == 1)
        return (nb);
    nb = my_compute_power_rec(nb, p - 1);
    nb = nb * originalnb;
    return (nb);
}
