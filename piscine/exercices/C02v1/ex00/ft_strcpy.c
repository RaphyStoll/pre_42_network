#include <stdio.h>

char *ft_strcpy(char *dest, char *src)
{
    int i = -1;
    printf("les input sont:\n________________ \nsrc = %s\ndest = %s\n", src, dest);
    while (src[++i] != '\0')
        dest[i] = src[i];
    dest[i] = '\0';
    printf("\nles output sont:\n________________ \nsrc = %s\ndest = %s\n", src, dest);
    return(dest);
}
int main ()
{
    char a [] = "Hello meuf";
    char b [] = "très très vide";
    ft_strcpy(b,a);
    
}