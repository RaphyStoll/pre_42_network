#include <unistd.h>

void ft_putchar(char character)
{
  write(1, &character, 1);
}

void ft_print_comb2(void)
{
  int firstNumber = -1;
  int secondNumber;

  while(firstNumber++, firstNumber <= 98)
  {
    secondNumber = firstNumber;
    while(secondNumber++, secondNumber <= 99)
    {
      ft_putchar(firstNumber / 10 + '0');
      ft_putchar(firstNumber % 10 + '0');
      ft_putchar(' ');
      ft_putchar(secondNumber / 10 + '0');
      ft_putchar(secondNumber % 10 + '0');
      if (firstNumber != 98)
      {
        ft_putchar(',');
        ft_putchar(' ');
      }
    }
  }
}

int main()
{
  ft_print_comb2();
}