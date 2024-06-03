#!/bin/bash

# Boucle infinie pour exécuter la commande norminette
while true; do
    # Afficher un message avant d'exécuter la commande norminette
    echo "Running norminette..."
    
    # Exécuter la commande norminette et capturer les erreurs
    if norminette; then
        echo "Norminette executed successfully."
    else
        echo "Error executing norminette. Retrying..."
    fi
    
    # Nettoyer l'écran
    clear

    # Attendre un certain temps avant de relancer la commande
    # Vous pouvez ajuster le délai selon vos besoins (par exemple, 10 secondes)
    sleep 3
done
