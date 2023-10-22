#include <stdio.h>

void ft_ultimate_div_mod(int *a, int *b)
{
    int c = *a;
    *a = c / *b;
    *b = c % *b;
}

int main()
{
    int i = 9;
    int j = 2;
    int *a = &i;
    int *b = &j;

    printf("div_mod avant fonction \na : %d\nb : %d\n\n", *a, *b);
    ft_ultimate_div_mod(a, b);
    printf("div_mod apres fonction \ndiv dans a : %d\nmod dans b : %d\n\n", *a, *b);
}