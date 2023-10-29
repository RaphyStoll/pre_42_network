#include <stdio.h>
int ft_fibonacci(int index)
{
    if(index == 0)
    return 0;
    if (index < 2)
    return 1;
    else
    return (ft_fibonacci(index-1) + ft_fibonacci(index -2));
}

int main()
{
    printf("suite de fibonacci  0 =   %d\n",ft_fibonacci(0));
    printf("suite de fibonacci  1 =   %d\n",ft_fibonacci(1));
    printf("suite de fibonacci  2 =   %d\n",ft_fibonacci(2));
    printf("suite de fibonacci  3 =   %d\n",ft_fibonacci(3));
    printf("suite de fibonacci  4 =   %d\n",ft_fibonacci(4));
    printf("suite de fibonacci  5 =   %d\n",ft_fibonacci(5));
    printf("suite de fibonacci  6 =   %d\n",ft_fibonacci(6));
    printf("suite de fibonacci  7 =  %d\n",ft_fibonacci(7));
    printf("suite de fibonacci  8 =  %d\n",ft_fibonacci(8));
    printf("suite de fibonacci  9 =  %d\n",ft_fibonacci(9));
    printf("suite de fibonacci 10 =  %d\n",ft_fibonacci(10));
    printf("suite de fibonacci 11 =  %d\n",ft_fibonacci(11));
    printf("suite de fibonacci 12 = %d\n",ft_fibonacci(12));
    printf("suite de fibonacci 13 = %d\n",ft_fibonacci(13));
    printf("suite de fibonacci 14 = %d\n",ft_fibonacci(14));
    printf("suite de fibonacci 15 = %d\n",ft_fibonacci(15));
}