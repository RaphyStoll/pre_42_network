#include <stdio.h>

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
    int count = 0;
    
    while(size != 0)
    {
        dest[count] = src[count];
        count++;
        size--;
    }
    count++;
    dest[count] = '\0';
    printf("les valeur de fin sont:\nsrc: %s\ndest: %s\nCount: %d\nSize: %d\n",src,dest,count,size);
    return size;
}

int main()
{
    char str[] = "Hello Bonjour a tous";
    char a [] = "coucou";
    int count = 0;

    while(str[count])
    {
        count++;
    }
    printf("les valeur de début sont:\nsrc: %s\ndest: %s\nCount: %d\n\n",str,a,count);
    ft_strlcpy(a,str,count);
}