#include <stdio.h>
#include <stdlib.h>

#include "m_automates.h"
#include "g_automates.h"

/*****************************************************************/
/*** Changements de representation des automates               ***/
/*****************************************************************/

G_Automate *m2g_automate(M_Automate *m_a){
  G_Automate *g_a;
  int i,j;
  char e;
  if (!m_a)
    { printf("\n Erreur : automate NULL dans la fonction m2g_automate \n");
      return NULL;
    }
  /* allocation et initialisation de l'automate sans les transitions */
  g_a = creer_g_automate(m_a->nb_etats,m_a->nb_etats_accept,m_a->accept);
  /* parcours de la matrice des transitions et ajout des transitions */
  for (i=0;i < m_a->nb_etats;i++)
    { for (j=0;j < m_a->nb_etats; j++)
	{ e = m_a->m_adj[(i*m_a->nb_etats)+j];
	  if (e != '\0')
	    ajout_transition(g_a,i,j,e);
	}
    }
  return g_a;
}

M_Automate *g2m_automate(G_Automate *g_a){
  return NULL; // A REMPLACER EN COMPLETANT LA FONCTION
}
  
