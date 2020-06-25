#include <stdio.h>
#include <stdlib.h>

#include "m_automates.h"
#include "g_automates.h"

/*****************************************************************/
/*** Changements de representation des automates               ***/
/*****************************************************************/

G_Automate *m2g_automate(M_Automate *m_a);

M_Automate *g2m_automate(G_Automate *g_a);
