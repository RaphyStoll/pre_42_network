
#include <stdio.h>
#include "libft.h"

int ft_isalpha(int c)
{
    return(('A' <= c && c <= 'Z') || ('a' <= c && c <= 'z'));
}
/*
int main()
{
    printf("a = return %d\n", ft_isalpha('a'));
    printf("A = return %d\n", ft_isalpha('A'));
    printf("1 = return %d\n", ft_isalpha('1'));
    return 0;
}*/