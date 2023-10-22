#include <stdio.h>

int ft_iterative_factorial(int nb)
{
    int result = nb;
    if (nb == 0)
    return 1;
    if (nb < 0)
    return 0;
    result += nb;
    return result;
}
int main ()
{
    int a = 9;
    printf ("iterative factoriel : %d * %d = %d\n", a, a, ft_iterative_factorial(a));
}