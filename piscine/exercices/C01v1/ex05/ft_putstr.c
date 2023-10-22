#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_putstr(char *str)
{
    int count = -1;
    while(count++, str[count])
    {
    ft_putchar(str[count]);
    }
}

int main()
{
    char a[] = "Hello la Team";            
    ft_putstr(a);
}