/*→ memcpy ← est utilisée pour copier un bloc de données depuis une source vers une destination.
Elle est couramment utilisée pour copier des données d'un endroit à un autre dans la mémoire.
○ dest : C'est un pointeur vers la destination où vous souhaitez copier les données.
○ src : C'est un pointeur vers la source de données que vous souhaitez copier.
○ num :  Il s'agit du nombre d'octets (bytes) que vous souhaitez copier de la source à la destination.
--------------------
exemple d'exectution ou l'on copie source dans destination il faut faire attention au \0:

#include <stdio.h>
#include <string.h>

int main() {
    char source[] = "Hello, World!";
    char destination[20];

    // Copie les données depuis source vers destination
    memcpy(destination, source, strlen(source) + 1); // +1 pour inclure le caractère nul '\0'

    printf("Source : %s\n", source);
    printf("Destination : %s\n", destination);

    return 0;
}
*/
#include <stdio.h>
#include "libft.h"

int ft_strlen(char *str)
{
    int count = 0;
    while(str[count])
    {
        count++;
    }

    return (count);
}

void    *ft_memcpy(void *dest, const void *src, size_t len)
{
    size_t   i;

    if(dest && src)
    {
        i = 0;
        while(i < len)
        {
            ((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
            i++;
        }
        ((unsigned char *)dest)[i] = '\0';
    }
    return(dest);
}
/*
int main()
{
    char source[] = "Hello World";
    char dest[13];
    ft_memcpy(dest, source, ft_strlen(source));

    printf("Source : %s\n", source);
    printf("Dest : %s\n", dest);
}*/