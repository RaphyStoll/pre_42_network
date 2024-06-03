#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void generate_comb(int comb[], int n, int index, int next)

    ft_print_combn(int n)
{
  int comb[10];

  if (0 < n && n < 10)
  {
    printf("erreur le nombre entré est  inférieur a 0 ou suppérieur a 10");
    return;
  }

  generate_comb(comb, n, 0, 0);
}

int main(int argc, char *argv[])
{
  if (argc != 2)
  {
    printf("Usage: ./program_name Argv[1]");
    return 1;
  }
  int number = atoi(argv[1]);
  ft_print_combn(number);
}