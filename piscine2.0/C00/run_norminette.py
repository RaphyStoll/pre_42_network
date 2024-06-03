import subprocess
import time

# Boucle infinie pour exécuter la commande norminette
while True:
    try:
        # Exécuter la commande norminette
        result = subprocess.run(["norminette"], capture_output=True, text=True)
        
        # Afficher la sortie de la commande
        print(result.stdout)
        print(result.stderr)

        # Attendre un certain temps avant de relancer la commande
        # Vous pouvez ajuster le délai selon vos besoins (par exemple, 10 secondes)
        time.sleep(10)
    except KeyboardInterrupt:
        print("Arrêt du script par l'utilisateur.")
        break
