#include <stdio.h>

void ft_swap(int *a, int *b)
{
    int c = 0;

    c = *a;
    *a = *b;
    *b = c;
}

int main()
{
    int i = 5;
    int j = 8;
    int *a = &i;
    int *b = &j;

    printf("set-up a : %d\n set-up b : %d\n", *a, *b);
    ft_swap(a, b);
    printf("result a : %d\n result b : %d\n", *a, *b);
}