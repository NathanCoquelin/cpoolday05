/*
** EPITECH PROJECT, 2022
** my_compute_factorial_it
** File description:
** This will compute factorial of nb interatively
*/

int my_compute_factorial_it(int nb)
{
    long long res = 1;

    if (nb == 0) {
        return 1;
    }
    if (nb < 0) {
        return 0;
    }
    for (unsigned int i = 1; i <= nb; i++) {
        res *= i;
        if (res > 2147483647 || res < -2147483647)
            return 0;
    }
    return res;
}
