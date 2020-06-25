#include <stdio.h>
#include <stdlib.h>

#include "transformations.h"

int main()
{
  M_Automate *m_a;
  G_Automate *g_a;
  printf("\n Automate A1 \n");
  printf("\n *** Transformation : M_Automate -> G_Automnate ***\n");
  m_a = charger_m_automate("ex_auto1.txt");
  g_a = m2g_automate(m_a);
  affiche_g_automate(g_a);
  detruire_m_automate(m_a);
  detruire_g_automate(g_a);
  printf("\n *** Transformation : G_Automate -> M_Automnate ***\n");
  g_a = charger_g_automate("ex_auto1.txt");
  m_a = g2m_automate(g_a);
  affiche_m_automate(m_a);
  detruire_g_automate(g_a);
  detruire_m_automate(m_a);
  printf("\n Automate A2 \n");
  printf("\n *** Transformation : M_Automate -> G_Automnate ***\n");
  m_a = charger_m_automate("ex_auto2.txt");
  g_a = m2g_automate(m_a);
  affiche_g_automate(g_a);
  detruire_m_automate(m_a);
  detruire_g_automate(g_a);
  printf("\n *** Transformation : G_Automate -> M_Automnate ***\n");
  g_a = charger_g_automate("ex_auto2.txt");
  m_a = g2m_automate(g_a);
  affiche_m_automate(m_a);
  detruire_g_automate(g_a);
  detruire_m_automate(m_a);
  printf("\n Automate A3 \n");
  printf("\n *** Transformation : M_Automate -> G_Automnate ***\n");
  m_a = charger_m_automate("ex_auto3.txt");
  g_a = m2g_automate(m_a);
  affiche_g_automate(g_a);
  detruire_m_automate(m_a);
  detruire_g_automate(g_a);
  printf("\n *** Transformation : G_Automate -> M_Automnate ***\n");
  g_a = charger_g_automate("ex_auto3.txt");
  m_a = g2m_automate(g_a);
  affiche_m_automate(m_a);
  detruire_g_automate(g_a);
  detruire_m_automate(m_a);
  printf("\n");
  return 0;
}


