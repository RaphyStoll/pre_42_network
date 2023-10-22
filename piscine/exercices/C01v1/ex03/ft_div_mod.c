#include <stdio.h>

void ft_div_mod(int a, int b, int *div, int *mod)
{
    *div = a / b;
    *mod = a % b;
}

int main()
{
    int a = 8;
    int b = 2;
    int *div = &a;
    int *mod = &b;
    printf("div_mod avant fonction \na : %d\nb : %d\n\n", a, b);
    ft_div_mod(a, b, div, mod);
    printf("div_mod après fonction \ndiv : %d\nmod : %d\n", *div, *mod);
}