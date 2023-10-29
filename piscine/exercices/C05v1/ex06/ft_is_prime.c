#include <stdio.h>
int ft_is_prime(int nb)
{
    int a = 2;
    if (nb < 2)
        return 0;
    if(nb == 2)
        return 1;
    while (a < nb)
    {
        if ((nb % a) == 0)
            return 0;
        a++;
    }
    return 1;
}
int main()
{
    int a = 21;
    printf("si %d est un nombre premier renvoi 1 et si non renvoi 0 : %d\n",a ,ft_is_prime(a));
}