#include <unistd.h>

void ft_print(char number)
{
  write(1, &number, 1);
}

void ft_print_comb(void)
{
  int firstNumber = 0;
  int secondNumber;
  int thirdNumber;

  while (firstNumber <= 7)
  {
    secondNumber = firstNumber + 1;
    while (secondNumber <= 8)
    {
      thirdNumber = secondNumber + 1;
      while (thirdNumber <= 9)
      {
        ft_print(firstNumber + 48);
        ft_print(secondNumber + '0');
        ft_print(thirdNumber + '0');
        if (firstNumber != 7 || secondNumber != 8 || thirdNumber != 9)
        {
          ft_print(',');
          ft_print(' ');
        }
        thirdNumber++;
      }
      secondNumber++;
    }
    firstNumber++;
  }
  ft_print('\n');
}
int main()
{
  ft_print_comb();
}