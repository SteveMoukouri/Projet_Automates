#include <stdio.h>
#include <stdlib.h>

#define TMP_STR_SIZE 10

#include "g_automates.h"

/*****************************************************************/
/*** Representation d'un automate avec des structures chainees ***/
/*****************************************************************/

/*** Affichage d'un automate de type G_Automate ***/

void affiche_g_automate(G_Automate *a) {
  int i;
  Transition *p;
  if (!a)
    { printf("\n Erreur : automate NULL dans la fonction affiche_g_automate \n");
      return;
    }
  printf("\n Nombre d'etats : %d",a->nb_etats);
  printf("\n Etats acceptants :");
  for (i=0;i<a->nb_etats;i++)
    { if (a->tab_etats[i]->acceptant == 1)
	printf(" %d ",a->tab_etats[i]->num);
    }
  printf("\n Transitions : ");
  for (i=0;i<a->nb_etats;i++)
    { p = a->tab_etats[i]->L_trans;
      while (p)
	{ printf(" (%d,%c,%d) ",i,p->etiquette,p->e_dst->num);
	  p = p->suiv;
	}
    }
  printf("\n");
}

/*** Allocation memoire d'un automate sans transition de type G_Automate ***/

G_Automate *creer_g_automate(int nb_etats,int nb_etats_accept,int *accept) {
  return NULL; // A REMPLACER EN COMPLETANT LA FONCTION
}

/*** Ajout d'une transition dans un automate de type G_Automate ***/

void ajout_transition(G_Automate *a, int si, int sf, char e)
{
    return; // A REMPLACER EN COMPLETANT LA FONCTION
}

/*** Desallocation d'un automate ***/

void detruire_g_automate(G_Automate *a){
  Transition *t;
  Transition *prec;
  int i;
  if (a)
    { for (i=0;i<a->nb_etats;i++)
	{ t=a->tab_etats[i]->L_trans;
	  while (t)
	    { prec = t;
	      t = t->suiv;
	      free(prec);
	    }
	  free(a->tab_etats[i]);
	}
      free(a->tab_etats);
      free(a);
    }
}

/*** Chargement d'un automate depuis un fichier ***/

G_Automate *charger_g_automate(char *nom_fichier){
  return NULL; // A REMPLACER EN COMPLETANT LA FONCTION
}

/*** Acceptation d'un mot par un G_Automate ***/

int accepte_mot_g_automate(G_Automate *a,char *mot){
  return 0; // A REMPLACER EN COMPLETANT LA FONCTION
}

int sauver_g_automate(char *nom_fichier,G_Automate *a){
  int i;
  Transition *t;

  /* Ouverture du fichier */
  FILE *f;
  f = fopen(nom_fichier,"w");
  if (!f)
    { printf("\n Impossible d'ouvrir le fichier %s \n",nom_fichier);
      return 0;
    }

  /* ecriture du nombre d'etats et du nombre d'etats acceptants */
  fprintf(f,"%d %d\n",a->nb_etats,a->nb_etats_accept);

  /* ecriture des etats acceptants */
  for (i=0;i<a->nb_etats;i++)
    { if (a->tab_etats[i]->acceptant)
	fprintf(f,"%d ",a->tab_etats[i]->num);
    }
  fprintf(f,"\n");

  /* ecriture des transitions */
  for (i=0;i<a->nb_etats;i++)
    { t = a->tab_etats[i]->L_trans;
      while (t)
	{ fprintf(f,"%d %c %d\n",i,t->etiquette,t->e_dst->num);
	  t = t->suiv;
	}
    }
  
  /* fermeture fichier */
  fclose(f);

  return 1;
}
