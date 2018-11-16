#include <stdio.h>
#include <stdlib.h>

#include "menu.h"
#include "donnees.h"
#include "action.h"



int main()
{
  Donnee *Recup = NULL;
  Recup = lire(Recup);

  menu(Recup);

  printf("\n\n\n");

  main();
}
