#include <stdio.h>

int ft_recursive_factorial(int nb)
{
    int result = nb;
    if (nb == 0)
    return 1;
    if (nb < 0)
    return 0;
    ft_recursive_factorial(result += nb);
    return result;
}

int main()
{
    int a = 9;
    printf ("recursive factoriel : %d * %d = %d\n", a, a,ft_recursive_factorial(a));
}