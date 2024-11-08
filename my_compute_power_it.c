/*
** EPITECH PROJECT, 2022
** my_compute_power_it
** File description:
** this will compute nb to the power p iteratively
*/

int check_is_neg1(int n)
{
    if (n < 0)
        return -1;
    else
        return 1;
}

int power_is_satisfy1(int n)
{
    if ( n == 0)
        return 1;
    else if (n < 0)
        return 0;
    return -1;
}

int test_if_overflow1(int neg, int p, int last_res, int res)
{
    if ( !( neg == 1 ) && ( p % 2 == 0 && check_is_neg1(res) == 1))
        return 1;
    else if ( neg == 1 && res < last_res)
        return 1;
    return 0;
}

int my_compute_power_it(int nb, int p)
{
    int res = nb;
    int last_res;
    int is_neg = check_is_neg1(nb);
    int is_comply = power_is_satisfy1(p);

    if ( is_comply >= 0 )
        return is_comply;
    for (int i = 1; i < p; i++) {
        last_res = res;
        res *= nb;
        if (test_if_overflow1(is_neg, p, last_res, res) == 1)
            return 0;
    }
    return res;
}
