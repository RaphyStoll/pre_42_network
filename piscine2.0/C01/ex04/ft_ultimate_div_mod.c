#include <stdio.h>
#include <stdlib.h>

void ft_ultimate_div_mod(int *a, int *b)
{
  int *temp = a;
  *a = *a / *b;
  *b = *temp % *b;
}

int main(int argc, char **argv)
{
  if (argc != 3)
  {
    printf("erreur ussage: %s argv[1] argv[2]", argv[0]);
  }
  int a = atoi(argv[1]);
  int b = atoi(argv[2]);
  ft_ultimate_div_mod(&a, &b);
  printf("a / b = %d reste %d", a, b);
}