#include <unistd.h>

void ft_putchard(char number)
{
    write(1, &number, 1);
}

void ft_print_comb(void)
{
    int firstNumber = 0;
    int secondNumber;
    int thirdNumber;

    while(firstNumber <= 7)
    {
        secondNumber = firstNumber + 1; 
        while(secondNumber <= 8)
        {
            thirdNumber = secondNumber + 1;
            while(thirdNumber <= 9)
            {
                ft_putchard(firstNumber);
                ft_putchard(secondNumber);
                ft_putchard(thirdNumber);
                if (firstNumber != 7 || secondNumber != 8 || thirdNumber != 9)
                {
                    ft_putchard(',');
                    ft_putchard(' ');
                }
                thirdNumber++;
            }
            secondNumber++;
        } 
        firstNumber++;
    }
    ft_putchard('\n');
}

int main()
{
    ft_print_comb();
}