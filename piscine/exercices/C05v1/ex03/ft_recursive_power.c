#include <stdio.h>
int ft_recursive_power(int nb, int power)
{
    int result = 0;
    if(nb < 0)
    return 0;
    if(nb == 0 && power == 0)
    return 1;
    if(power > 0)
    {
        power --;
    ft_recursive_power(result=nb*nb,power);
    }
    return result;
}
int main()
{
    int a = 9;
    int b = 2;
    printf ("recursive power : %d^%d = %d\n",a ,b ,ft_recursive_power(a,b));
}