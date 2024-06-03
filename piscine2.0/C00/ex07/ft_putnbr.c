#include <unistd.h>
#include <stdlib.h>

void ft_putchar(char character)
{
  write(1, &character, 1);
}

void ft_putnbr(int nb)
{
  if (nb == -2147483648)
  {
    write(1, "-2147483648", 12);
    return;
  }
  if (nb < 0)
  {
    nb = -nb;
    write(1, "-", 1);
  }
  if (nb == 0)
    ft_putchar('0');
  if (nb >= 10)
    ft_putnbr(nb / 10);
  ft_putchar((nb % 10) + '0');
}

int main(int argc, char *argv[])
{
  if (argc != 2)
  {
    write(1, "Usage: ./program_name number\n", 29);
    return 1;
  }

  int number = atoi(argv[1]);
  ft_putnbr(number);
  ft_putchar('\n');
  return 0;
}