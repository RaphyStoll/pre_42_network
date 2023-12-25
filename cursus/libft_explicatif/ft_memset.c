/*→ memset ← sert a attribuer la memoire pour un nombre donner de int ex:

signature :     void *memset(void *ptr, int value, size_t num)

○ ptr : C'est un pointeur vers le début du bloc de mémoire que vous souhaitez initialiser.
○ value : C'est la valeur que vous souhaitez copier dans chaque octet du bloc de mémoire. Cette valeur est généralement un entier représentant un octet (0 à 255).
○ num : C'est le nombre d'octets à initialiser.
-------------------
exemple d'exectution ou l'on remplit de 0 la chaine de caractère de 0:

#include <string.h>

int main() {
    char myString[10];
    memset(myString, 0, sizeof(myString)); (char crée plus tot, valeur a attribuer, nombre d'octet a initialiser)
    return 0;
}
result : myString= [0], [0], [0], [0], [0], [0], [0], [0], [0], [0]

memset est souvent utilisée pour initialiser des tableaux ou des zones de mémoire avant de stocker des données réelles. 
Elle est particulièrement utile pour éviter d'avoir des données résiduelles indésirables dans la mémoire.
*/

#include "libft.h"
void *ft_memset(void *str, int value, size_t num)
{
    if(str == NULL)
    { // la sorite 2 est la sortie d'érreur
        write(2, "L'allocation de mémoire a echoue.\n", 31);
        return NULL;
    }
    //int* a = (int *)malloc(sizeof(num));
    unsigned char *char_str = (unsigned char*)str;

    size_t i = 0;
    while(i < num)
    {
        char_str[i] = (unsigned char)value;
        i++;
    }
    //char_str[i] = '\0';
    return str;
}
/*
int main()
{
    char a[10];
    ft_memset(a, '9', sizeof(a));

    // Utilisez la fonction write pour afficher le contenu du tableau
    write(1, a, sizeof(a));
    return 0;
}*/