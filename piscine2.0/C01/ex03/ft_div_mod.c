#include <stdio.h>
#include <stdlib.h>

int ft_verif(int b)
{
  if (b == 0)
  {
    printf("erreur division par 0\n");
    return 1;
  }
  return 0;
}

void ft_div_mod(int a, int b, int *div, int *mod)
{
  if (ft_verif(b)) // si return 1 = true donc rentre dans la boucle
  {
    return;
  }
  *div = a / b;
  *mod = a % b;
}

int main(int argc, char **argv)
{
  if (argc != 3)
  {
    printf("Usage: %s Argv[1] Argv[2]", argv[0]);
    return 1;
  }

  int a = atoi(argv[1]);
  int b = atoi(argv[2]);
  int div = 0;
  int mod = 0;

  if (ft_verif(b)) // si return 1 = true donc rentre dans la boucle
  {
    return;
  }

  ft_div_mod(a, b, &div, &mod);

  printf("%d / %d = %d reste %d \n", a, b, div, mod);

  return 0;
}