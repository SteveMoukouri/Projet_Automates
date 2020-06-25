#include <stdio.h>
#include <stdlib.h>

#include "g_automates.h"

int main()
{
  printf("\n *** G_Automates ***\n");
  printf("\n *** G_Automate A1 ***\n");
  G_Automate *g_a;
  char mot1[]="";
  char mot2[]="abbbcb";
  char mot3[]="abcab";
  char mot4[]="abcbabcb";
  char mot5[]="abcbab";
  g_a = charger_g_automate("ex_auto1.txt");
  affiche_g_automate(g_a);
  printf("mot : %s --> %d\n",mot1,accepte_mot_g_automate(g_a,mot1));
  printf("mot : %s --> %d\n",mot2,accepte_mot_g_automate(g_a,mot2));
  printf("mot : %s --> %d\n",mot3,accepte_mot_g_automate(g_a,mot3));
  printf("mot : %s --> %d\n",mot4,accepte_mot_g_automate(g_a,mot4));
  printf("mot : %s --> %d\n",mot5,accepte_mot_g_automate(g_a,mot5));
  sauver_g_automate("g_ex_auto1.txt",g_a);
  detruire_g_automate(g_a);
  printf("\n *** G_Automate A2 ***\n");
  char mot6[]="abbabb";
  char mot7[]="aab";
  char mot8[]="ab";
  char mot9[]="abbab";
  g_a = charger_g_automate("ex_auto2.txt");
  affiche_g_automate(g_a);
  printf("mot : %s --> %d\n",mot1,accepte_mot_g_automate(g_a,mot1));
  printf("mot : %s --> %d\n",mot6,accepte_mot_g_automate(g_a,mot6));
  printf("mot : %s --> %d\n",mot7,accepte_mot_g_automate(g_a,mot7));
  printf("mot : %s --> %d\n",mot8,accepte_mot_g_automate(g_a,mot8));
  printf("mot : %s --> %d\n",mot9,accepte_mot_g_automate(g_a,mot9));
  sauver_g_automate("g_ex_auto2.txt",g_a);
  detruire_g_automate(g_a);
  printf("\n *** G_Automate A3 ***\n");
  char mot10[]="abbbab";
  char mot11[]="abbaab";
  char mot12[]="ababaaabab";
  char mot13[]="aaabababaaa";
  g_a = charger_g_automate("ex_auto3.txt");
  affiche_g_automate(g_a);
  printf("mot : %s --> %d\n",mot1,accepte_mot_g_automate(g_a,mot1));
  printf("mot : %s --> %d\n",mot10,accepte_mot_g_automate(g_a,mot10));
  printf("mot : %s --> %d\n",mot11,accepte_mot_g_automate(g_a,mot11));
  printf("mot : %s --> %d\n",mot12,accepte_mot_g_automate(g_a,mot12));
  printf("mot : %s --> %d\n",mot13,accepte_mot_g_automate(g_a,mot13));
  sauver_g_automate("g_ex_auto3.txt",g_a);
  detruire_g_automate(g_a);
  printf("\n");
  return 0;
}


