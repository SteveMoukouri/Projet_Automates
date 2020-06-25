#include <stdio.h>
#include <stdlib.h>

#include "m_automates.h"

int main()
{
  printf("\n *** M_Automates ***\n");
  printf("\n *** M_Automate A1 ***\n");
  M_Automate *m_a;
  char mot1[]="";
  char mot2[]="abbbcb";
  char mot3[]="abcab";
  char mot4[]="abcbabcb";
  char mot5[]="abcbab";
  m_a = charger_m_automate("ex_auto1.txt");
  affiche_m_automate(m_a);
  printf("mot : %s --> %d\n",mot1,accepte_mot_m_automate(m_a,mot1));
  printf("mot : %s --> %d\n",mot2,accepte_mot_m_automate(m_a,mot2));
  printf("mot : %s --> %d\n",mot3,accepte_mot_m_automate(m_a,mot3));
  printf("mot : %s --> %d\n",mot4,accepte_mot_m_automate(m_a,mot4));
  printf("mot : %s --> %d\n",mot5,accepte_mot_m_automate(m_a,mot5));
  sauver_m_automate("m_ex_auto.txt",m_a);
  detruire_m_automate(m_a);
  printf("\n *** M_Automate A2 ***\n");
  char mot6[]="abbabb";
  char mot7[]="aab";
  char mot8[]="ab";
  char mot9[]="abbab";
  m_a = charger_m_automate("ex_auto2.txt");
  affiche_m_automate(m_a);
  printf("mot : %s --> %d\n",mot1,accepte_mot_m_automate(m_a,mot1));
  printf("mot : %s --> %d\n",mot6,accepte_mot_m_automate(m_a,mot6));
  printf("mot : %s --> %d\n",mot7,accepte_mot_m_automate(m_a,mot7));
  printf("mot : %s --> %d\n",mot8,accepte_mot_m_automate(m_a,mot8));
  printf("mot : %s --> %d\n",mot9,accepte_mot_m_automate(m_a,mot9));
  sauver_m_automate("m_ex_auto2.txt",m_a);
  detruire_m_automate(m_a);
  printf("\n *** M_Automate A3 ***\n");
  char mot10[]="abbbab";
  char mot11[]="abbaab";
  char mot12[]="ababaaabab";
  char mot13[]="aaabababaaa";
  m_a = charger_m_automate("ex_auto3.txt");
  affiche_m_automate(m_a);
  printf("mot : %s --> %d\n",mot1,accepte_mot_m_automate(m_a,mot1));
  printf("mot : %s --> %d\n",mot10,accepte_mot_m_automate(m_a,mot10));
  printf("mot : %s --> %d\n",mot11,accepte_mot_m_automate(m_a,mot11));
  printf("mot : %s --> %d\n",mot12,accepte_mot_m_automate(m_a,mot12));
  printf("mot : %s --> %d\n",mot13,accepte_mot_m_automate(m_a,mot13));
  sauver_m_automate("m_ex_auto3.txt",m_a);
  detruire_m_automate(m_a);
  printf("\n");
  return 0;
}


