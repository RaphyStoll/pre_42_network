#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *my_strdup(const char *str) {
    if (str == NULL) {
        return NULL; // Gestion du cas où la chaîne d'origine est nulle
    }

    size_t len = strlen(str);
    char *duplicate = (char *)malloc(len + 1);

    if (duplicate != NULL) {
        strcpy(duplicate, str);
    } else {
        // Gestion d'une éventuelle erreur d'allocation de mémoire
        fprintf(stderr, "Erreur d'allocation mémoire lors de la duplication de la chaîne.\n");
    }

    return duplicate;
}

int main() {
    const char *original = "Hello, World!";
    char *duplicate = my_strdup(original);

    if (duplicate != NULL) {
        // Utilisez la nouvelle chaîne copiée
        printf("Original : %s\n", original);
        printf("Duplicate : %s\n", duplicate);

        // N'oubliez pas de libérer la mémoire allouée dynamiquement
        free(duplicate);
    } else {
        // Gérer une éventuelle erreur d'allocation de mémoire
        printf("Échec de la duplication de la chaîne.\n");
    }

    return 0;
}
