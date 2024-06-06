#include <stdio.h>
#include <stdlib.h>

void ft_swap(int *a, int *b)
{

  printf("avant le swap:\na = %d\nb = %d\n\n", *a, *b);
  int *swap = a;
  a = b;
  b = swap;
  printf("après le swap:\na = %d\nb = %d\n", *a, *b);
}

int main(int argc, char **argv)
{
  if (argc != 3)
  {
    printf("Usage: ./program_name Argv[1] Argv[2]");
  }
  int argument1 = atoi(argv[1]);
  int argument2 = atoi(argv[2]);
  ft_swap(&argument1, &argument2);
}