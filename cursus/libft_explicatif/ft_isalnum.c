#include "libft.h"
#include <stdio.h>
int ft_isalnum(int c);
(
    return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9'));
)
/*
int main()
{
    printf("a = return %d\n", ft_isalnum('a'));
    printf("A = return %d\n", ft_isalnum('A'));
    printf("1 = return %d\n", ft_isalnum('1'));
    return 0;
}*/