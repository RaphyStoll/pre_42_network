#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int ft_atoi(char *str)
{
    int count = 0;
    int number = 0;
    int neg = 1;

    while (str[count] == 32 || str[count] <= 9 || str[count] <= 13)
        count++;
    while (str[count] == '+' || str[count] == '-')
    {
        if (str[count] == '-')
            neg = neg * (-1);
        count++;
    }
    while(str[count] >= 48 && str[count] <= 57)
    {
        number = number * 10;
        number = number + str[count] - '0';
        count++;
    }
    number = number * neg;
    return (number);
}

int main(void)
{
	char	u[]= " ---+--+1234ab567";
    int *a = atoi(u);
	
	printf("ft_atoi = %d\n", ft_atoi(u));
	printf("atoi = %d\n", a);
	return (0);
}