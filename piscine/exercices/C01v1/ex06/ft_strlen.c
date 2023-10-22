#include <unistd.h>

int ft_strlen(char *str)
{
    int count = 0;
    while(str[count])
    {
        count++;
    }

    return (count);
}

int main()
{
    char a[] = "Hello la Team";            
    ft_strlen(a);
}