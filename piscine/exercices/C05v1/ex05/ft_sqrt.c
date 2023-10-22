#include <stdio.h>

int ft_sqrt(int nb)
{
    int a = 1;
    while (46360 >= a) //racine de int max = env46360
    {
        if ((a * a) == nb)
            return a;
        a++;
    }
    return 0;
}

int main()
{
    int a = 83;
    printf("racine quarre de %d = %d", a, ft_sqrt(a));
}