#include <stdio.h>
int ft_is_prime(int nb)
{
    int i;

    i = 2;
    while (i <= nb / i)
    {
        if (nb % i == 0)
            return (0);
        i++;
    }
    return (1);
}

int ft_find_next_prime(int nb)
{
    int i;

    i = nb;
    if (i < 2)
        return (2);
    while (!ft_is_prime(i))
        i++;
    return (i);
}

int main()
{
    int a = 4;
    printf("le chiffre premier directement suppérieur a %d est le %d", a, ft_find_next_prime(a));
}