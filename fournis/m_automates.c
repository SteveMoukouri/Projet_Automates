#include <stdio.h>
#include <stdlib.h>

#include "m_automates.h"

#define TMP_STR_SIZE 10

/******************************************************/
/*** Representation d'un automate avec des tableaux ***/
/******************************************************/

/*** Affichage d'un automate de type M_Automate ***/

void affiche_m_automate(M_Automate *a) {
  int i,j;
  if (!a)
    { printf("\n Erreur : automate NULL dans la fonction affiche_m_automate \n");
      return;
    }
  printf("\n Nombre d'etats : %d",a->nb_etats);
  printf("\n Etats acceptants :");
  for (i=0;i<a->nb_etats_accept;i++)
    printf(" %d ",(a->accept)[i]);
  printf("\n Transitions : ");
  j=0;
  for (i=0;i<a->nb_etats * a->nb_etats;i++)
    { if ((a->m_adj)[i] != '\0')
	printf("(%d,%c,%d) ",i/a->nb_etats,(a->m_adj)[i],i % a->nb_etats);
    }
  printf("\n");
}

/*** Desallocation d'un automate ***/

void detruire_m_automate(M_Automate *a){
  if (a)
    { free(a->accept);
      free(a->m_adj);
      free(a);
    }
}

/*** Chargement d'un automate depuis un fichier ***/

M_Automate *charger_m_automate(char *nom_fichier){
  int i,j;
  char c;

  /* Ouverture du fichier */
  FILE *f;
  f = fopen(nom_fichier,"r");
  if (!f)
    { printf("\n Impossible d'ouvrir le fichier %s \n",nom_fichier);
      return NULL;
    }

  /* Allocation de l'automate */
  M_Automate *a = (M_Automate *)malloc(sizeof(M_Automate));
  if (!a)
    { printf("\n Erreur allocation de l'automate dans la fonction charger_m_automate \n");
      return NULL;
    }

  /* tableau pour la lecture */
  char tmp_str[TMP_STR_SIZE];

  /* lecture de la 1ere ligne */
  fgets(tmp_str,TMP_STR_SIZE,f);

  /* recuperation du nombre d'etats et du nombre d'etats acceptants */
  if (sscanf(tmp_str,"%d %d\n",&(a->nb_etats),&(a->nb_etats_accept)) !=2)
    { printf("\n Erreur format fichier ligne 1 dans la fonction charger_m_automate \n");
      detruire_m_automate(a);
      return NULL;
    }

  /* allocation du tableau des etats acceptants */
  a->accept = (int *)malloc(sizeof(int)*a->nb_etats_accept);
  if (!a->accept)
    { printf("\n Erreur allocation du tableau des etats acceptants dans la fonction charger_m_automate \n");
      detruire_m_automate(a);
      return NULL;
    }

  /* allocation et initialisation de la matrice des transitions */
  a->m_adj = (char *)malloc(sizeof(int) * a->nb_etats * a->nb_etats);
  if (!a->m_adj)
    { printf("\n Erreur allocation de la matrice des transitions dans la fonction charger_m_automate \n");
      detruire_m_automate(a);
      return NULL;
    }
  for (i=0;i<a->nb_etats * a->nb_etats;i++) (a->m_adj)[i]='\0';
   
  /* lecture des etats acceptants */  
  a->accept = (int *)malloc(sizeof(int)*a->nb_etats_accept);
  int *p = a->accept;
  for (i=0;i<a->nb_etats_accept;i++)
    fscanf(f,"%d ",p++);

  /* lecture des transitions */
  while (fgets(tmp_str,TMP_STR_SIZE,f))
    { if (sscanf(tmp_str,"%d %c %d\n",&i,&c,&j) !=3)
        { printf("\n Erreur format fichier ligne transition dans la fonction charger_m_automate \n");
          detruire_m_automate(a);
          return NULL;
        }
      (a->m_adj)[(i*a->nb_etats)+j]=c;
    }

  /* fermeture fichier */
  fclose(f);

  return a;
}

/*** Acceptation d'un mot par un M_Automate ***/

int accepte_mot_m_automate(M_Automate *a,char *mot){
  return 0; // A REMPLACER EN COMPLETANT LA FONCTION
}

/*** Sauvegarde d'un automate dans un fichier ***/

int sauver_m_automate(char *nom_fichier,M_Automate *a){
  return 0; // A REMPLACER EN COMPLETANT LA FONCTION
}
