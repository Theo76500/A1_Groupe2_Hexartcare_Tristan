#include <stdio.h>
#include <stdlib.h>

#include "menu.h"
#include "generationCode.h"

void menu()
{
  int choix;
  printf("=== MENU DU COEUR DE LEDS === \n");
  printf("Veuillez choisir le mode d'affichage du coeur de LEDs : \n");
  printf("1. Toutes les LEDs clignotent au rythme des battements de coeur \n");
  printf("2. Une LED sur deux \n");
  printf("3. Une LED sur trois \n");
  printf("4. Mode Chenille \n");
  printf("5. Mode Chenille avec retour \n");
  printf("6. Allumer une LED au choix \n");

  scanf("%d", &choix);

  switch (choix)
  {
    case 1:
    modif(1);
    break;

    case 2:
    modif(2);
    break;

    case 3:
    modif(3);
    break;

    case 4:
    modif(4);
    break;

    case 5:
    modif(5);
    break;

    case 6:
    modif(6);
    modif2();
    break;
  }

}
