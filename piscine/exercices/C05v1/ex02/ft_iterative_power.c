#include <stdio.h>

int ft_iterative_power(int nb, int power)
{
    int result = 0;
    if(nb < 0)
    return 0;
    if(nb == 0 && power == 0)
    return 1;
    while(power > 0)
    {
    result = nb * nb;
    power --;
    }
    return result;
}
int main ()
{
    int a = 9;
    int b = 2;
    printf ("iterative power : %d^%d = %d\n", a, b, ft_iterative_power(a, b));
}
