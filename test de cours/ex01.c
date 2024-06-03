#include <stdio.h>

void ft_print(char *texte)
{
  printf("%s", texte);
  return;
}

int ft_prompt()
{
  int number;
  scanf("%d", &number);
  return number;
}

void ft_calculate(int num1, char operateur, int num2)
{
  int resultat;
  if (operateur == '+')
  {
    resultat = num1 + num2;
    printf("%d + %d = %d\n", num1, num2, resultat);
    return;
  }
  if (operateur == '-')
  {
    resultat = num1 - num2;
    printf("%d - %d = %d\n", num1, num2, resultat);
    return;
  }
  if (operateur == '/')
  {
    if (num2 == 0)
    {
      printf("erreur division par 0");
      return;
    }
    resultat = num1 / num2;
    printf("%d / %d = %d\n", num1, num2, resultat);
    return;
  }
  if (operateur == '*')
  {
    resultat = num1 * num2;
    printf("%d * %d = %d\n", num1, num2, resultat);
    return;
  }
  if (operateur == '%')
  {
    resultat = num1 % num2;
    printf("%d %% %d = %d\n", num1, num2, resultat);
    return;
  }
  else
  {
    printf("opérateur non reconnu");
  }
  return;
}

int main()
{
  int number1;
  char operateur;
  int number2;
  ft_print("Entrer le 1er nombre : ");
  number1 = ft_prompt();
  ft_print("Entrer l'opérateur (+, -, *, /, %): ");
  scanf(" %c", &operateur);
  ft_print("Entrer le 2eme nombre : ");
  number2 = ft_prompt();
  ft_calculate(number1, operateur, number2);
  return 0;
}