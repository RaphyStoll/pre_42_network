#include <unistd.h>

void ft_putchar(char a)
{
    write(1, &a, 1);
}

char *ft_strcapitalize(char *str)
{
    int i = 0;
    while (str[i] != '\0')
    {
        if ('a' <= str[0] && str[0] <= 'z')
            str[0] -= 32;
        else if ('A' <= str[i] && str[i] <= 'Z')
            str[i] += 32;
        ft_putchar(str[i]);
        i++;
    }
    return str;
}

int main()
{
    char a []= "salUt, coMmEnt tu vAS ? 42mOTs qUaRanTe-deux; cInqUante+et+un";
    ft_strcapitalize(a);
}