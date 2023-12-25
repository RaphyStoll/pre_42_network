/*→ isdigit ← sert a vérifié si le caractère est un chiffre
*/

#include "libft.h"
#include <stdio.h>
#include <ctype.h>
/*int ls_isdigit (int c)
{
    if (isdigit (c))
    {
        printf("'%c' isdigit est un chiffre.\n", c);
    }
    else
    {
        printf("'%c' isdigit n'est pas un chiffre.\n", c);
    }
    return 0;
}
*/
int ft_isdigit(int c)
{
    return('0' <= c && c <= '9');
}
/*
int main()
{
    char c = '5';
    //ls_isdigit(c);
    ft_isdigit(c);
}*/
