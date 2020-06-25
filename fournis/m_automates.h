#include <stdio.h>
#include <stdlib.h>

/******************************************************/
/*** Representation d'un automate avec des tableaux ***/
/******************************************************/

/*** Definition du type M_Automate ***/

typedef struct{
  int nb_etats;         /* nombre d'etats de l'automate */
  int nb_etats_accept;  /* nombre d'etats acceptants */
  int *accept;          /* tableau des numeros des etats acceptants */ 
  char *m_adj;          /* matrice d'adjacence */
}M_Automate;

/*** Affichage d'un automate de type M_Automate ***/

void affiche_m_automate(M_Automate *a);

/*** Desallocation d'un automate ***/

void detruire_m_automate(M_Automate *a);

/*** Chargement d'un automate depuis un fichier ***/

M_Automate *charger_m_automate(char *nom_fichier);

/*** Acceptation d'un mot par un M_Automate ***/

int accepte_mot_m_automate(M_Automate *a,char *mot);

/*** Sauvegarde d'un automate dans un fichier ***/

int sauver_m_automate(char *nom_fichier,M_Automate *a);
