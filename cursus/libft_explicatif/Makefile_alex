#nom de sortie du ficher (.a est une bibliotheque statique) (semplable a -o dans gcc)
NAME = libft.a

#définit le compilateur
CC = gcc
#définit les flags utilisé lors de la compilation
CFLAGS = -Wall -Werror -Wextra
#defini une valeur AR comme ar rcs utilisé pour crée une archive statique (fichier binaire qui regroupe plusieurs fichier objets \
(est le code binaire des fichier que le compilateur produit mais qui ne sont pas lié on aura par exemple un main.o fonction.o et makefile.o \
ils deviennent inutile une fois le projet compiler on les concidère donc comme des fichiers temporaire (gcc les suprime solo)))
AR = ar rcs
#defini une valeur RM comme rm(remove) -f(option qui supprime sans demander la confirmation) 
RM = rm -f
# défini une valeur files qui contien les nom des fichier sources (sans extension) (fichier de code (fonjction.c)) à inclure dans la biblio
FILES = ft_memset \
		ft_bzero

#défini une varleur SRCS_DIR ou l'on stoque le chemin d'acces des ficher ici ./ représente le répertoire du makefile
SRCS_DIR = ./
#défini une valeur SRCS\
$ utilisé pour invoquer des fonctions de manipulation de chaînes de caractères\
l'on utilise addprefix pour ajouter SRCS_DIR ou l'on a défini le chemin du répertoir plus haut \
addsuffic pour définir une extention ici .c \
files defini la valeur Files ou l'on a stocker les nom sans extension des fichier sources
SRCS = $(addprefix $(SRCS_DIR), $(addsuffix .c, $(FILES)))
#pareil que plus haut pour les objects
OBJS_DIR = ./
OBJS = $(addprefix $(OBJS_DIR), $(addsuffix .o, $(FILES)))
#% est une syntaxe generique qui indique n'importe quel nom de fichier\
cette ligne défini une règle qui dis que l'on veut générer un ficher .o et un .c
%.o: %.c
#CC est defini au debut comme gcc\
on y ajoute CFLAGS qui sont les flags definit en haut\
-c (indique au compilateur de générer un fichier objet plut^t qu'un executable)\
-o Cette option indique le nom du fichier objet de sortie, qui est représenté par $@(automatisme de Make qui représente fichier objet en cours de génération)\
$@ représente la cible de la règle (monfichier.o)\
$< défini le fichier source (monfichier.c)
	$(CC) $(CFLAGS) -c -o $@ $<
#défini que pour crée NAME (libft.a) l'on doit crée avant tout les OBJS
$(NAME): $(OBJS)
#defini AR (ar rcs) qui crée une archive statique $@ meme fonction que en haut\
$^ représente tout les dépendances de la règles
	$(AR) $@ $^
#génère une cible qui s'appelle all souvent utiliser pour ciblé la construction principale (libft.a)
 
#définit une règle courament utilisé pour nettoyer les fichier générer lors de la compil 
clean:
	$(RM) $(OBJS)
#définit une règle qui depend de clean mais qui est est plus stricte(mesure de sécurité)
fclean: clean
	$(RM) $(NAME)
#la regle re(rebuild) est utilisé pour reconstrure quelque chose ici on relance fclean\
dans l'exemple cela fera fclean pour tout supprimer puis recompilera tout avec all
re: fclean all
