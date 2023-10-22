/*→ bzero ← sert a remplir un bloc mémoire de 0 (octets nuls)

signature:      void bzero(void *s, size_t n);

○ s est un pointeur vers le début de la mémoire à remplir de zéros.
○ n est le nombre d'octets à remplir avec des zéros, à partir de l'adresse pointée par s.
-----------
exemple d'execution :

#include <stdio.h>
#include <strings.h>

int main() {
    char buffer[10];
    
    // Remplit le tableau buffer avec des zéros
    bzero(buffer, sizeof(buffer));

    // Affiche le contenu du tableau
    for (int i = 0; i < sizeof(buffer); i++) {
        printf("%d ", buffer[i]);
    }

    return 0;
}

result : buffer= [0], [0], [0], [0], [0], [0], [0], [0], [0], [0]

 La fonction bzero est utile pour garantir que des données sensibles,
 comme des mots de passe stockés en mémoire, sont effacées de manière sécurisée lorsqu'elles ne sont plus nécessaires.

 bien que bzero soit disponible dans de nombreuses implémentations de la bibliothèque C,
 il est déconseillé d'utiliser bzero car il est obsolète en C99 et ultérieur.

    La fonction memset est une alternative recommandée pour effectuer la même tâche,
    et elle est largement utilisée aujourd'hui.
*/

#include <stdlib.h>
#include <unistd.h>

void ft_bzero(void *s, size_t num)
{
    if(s == NULL)
    { // la sorite 2 est la sortie d'érreur
        write(2, "L'allocation de mémoire a échoué.\n", 31);
        return NULL;
    }
    ft_memset(s, '0', sizeof(num));

    return s;
}
int main()
{
    char a[10];
    ft_bzero(a, sizeof(a));

    // Utilisez la fonction write pour afficher le contenu du tableau
    write(1, a, sizeof(a));

    return 0;
}