/*
** EPITECH PROJECT, 2022
** my_compute_factorial_rec
** File description:
** This will compute factorial nb recursively
*/

int fact_rec(int n)
{
    long long res;
    
    if (n == 0) {
        return 1;
    }
    if (n < 0) {
        return 0;
    }
    res = n * fact_rec(n - 1);
    if (res >= 2147483647 || res <= -2147483647)
        return 0;
    return res;
}

int my_compute_factorial_rec(int nb)
{
    return fact_rec(nb);
}
