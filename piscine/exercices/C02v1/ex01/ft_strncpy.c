#include <stdio.h>
char *ft_strncpy(char *dest, char *src, unsigned int n)
{
    unsigned int i = -1;
    while(++i < n && src[i] != '\0')
        dest[i] = src[i];
    while(i < n)
        dest[i++] = '\0';
    dest[i] = '\0';
    printf("\nles output sont:\n________________ \nsrc = %s\ndest = %s\nn = %d\n", src, dest, n);
    return (dest);
}

int main()
{
    char src [] = "Hello";
    char dest [] = "vide";
    int n = 5;
    printf("les input sont:\n________________\nsrc = %s\ndest = %s\nn = %d\n", src, dest,n);
    ft_strncpy(dest, src, n);
    printf("\ndest après ft_strncpy : %s\n", dest);
}