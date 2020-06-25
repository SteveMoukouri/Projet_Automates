#include <stdio.h>
#include <stdlib.h>

/*****************************************************************/
/*** Representation d'un automate avec des structures chainees ***/
/*****************************************************************/

/*** Definition du type G_Automate ***/

typedef struct etat Etat;

typedef struct transition{
  char etiquette;          /* etiquette de la transition */
  Etat *e_dst;             /* etat destination de la transition */
  struct transition *suiv; /* transition suivante a partir de l'etat d'origine */
 } Transition;

struct etat{
  int num;              /* numero de l'etat */
  int acceptant;        /* =1 si etat acceptant, =0 sinon */
  Transition* L_trans;  /* liste des transitions issues de l'etat */
 };

typedef struct {
  int nb_etats;         /* nombre d'etats */
  int nb_etats_accept;  /* nombre d'etats acceptants */
  Etat **tab_etats;     /* tableau des etats */
} G_Automate;

/*** Affichage d'un automate de type G_Automate ***/

void affiche_g_automate(G_Automate *a);

/*** Allocation memoire d'un automate sans transition de type G_Automate ***/

G_Automate *creer_g_automate(int nb_etats,int nb_etats_accept,int *accept);

/*** Ajout d'une transition dans un automate de type G_Automate ***/

void ajout_transition(G_Automate *a, int si, int sf, char e);

/*** Desallocation d'un automate ***/

void detruire_g_automate(G_Automate *a);

/*** Chargement d'un automate depuis un fichier ***/

G_Automate *charger_g_automate(char *nom_fichier);

/*** Acceptation d'un mot par un G_Automate ***/

int accepte_mot_g_automate(G_Automate *a,char *mot);

/*** Sauvegarde d'un automate dans un fichier ***/

int sauver_g_automate(char *nom_fichier,G_Automate *a);
