#include <stddef.h>
#include <stdio.h>
#include "libft.h"

void *ft_memccpy(void *dest, const void *src, int c, size_t n)
{
    unsigned char *d = dest;
    const unsigned char *s = src;
    unsigned char uc = (unsigned char)c;

    while (n--)
    {
        *d = *s;
        if (*s == uc)
        {
            return ++d;
        }
        d++;
        s++;
    }
    return NULL;
}

int main()
{
    char src[] = "Hello, World!";
    char find = 'H';
    char dest[20];
    char *result;

    result = ft_memccpy(dest, src, find, 20);

    if (result)
    {
        // Calculer la longueur de la chaîne copiée en utilisant result
        size_t length = result - dest;

        // Afficher correctement la chaîne copiée jusqu'à cette longueur
        printf("Caractère %c trouvé. Destination après copie : %.*s\n", find, (int)length, dest); /* dans %.*s l'* sert a indiqué la largeur de champs (ici la longeur de la chaine)
        a besoin d'un argument (int)pour connaitre la longeur (ici (int)length)*/          
        printf("Pointeur vers l'octet suivant dans la destination : %p\n", (void *)result);       // Utilisation de (void *) pour éviter un avertissement
    }

    else
    {
        printf("Caractère %c non trouvé dans les 20 premiers octets de la source.\n", find);
    }

    return 0;
}
