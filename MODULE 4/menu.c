#include <stdio.h>
#include <stdlib.h>

#include "menu.h"
#include "action.h"

/******************MENU*******************
* menu.c permet de sélectionner à l'aide *
* d'un menu ce que nous voulons faire    *
* avec le fichier .csv (Afficher les     *
* données ou les recherchers.            *
*****************************************/


void menu(Donnee *Recup)
{

  int choix, choix2, choix3, choix4;

  printf("=== MENU === \n\n");
  printf("1. Afficher les donnees dans l'ordre du fichier .csv \n\n");
  printf("2. Afficher les donnees en ordre croissant/decroissant en fonction du temps \n\n");
  printf("2. Afficher les donnees en ordre croissant/decroissant en fonction du pouls  \n\n");
  printf("4. Rechercher et afficher les donnees pour un temps particulier \n\n");
  printf("5. Afficher la moyenne de pouls sur une plage de temps donnee \n\n");
  printf("6. Afficher le nombre de lignes de donnees actuellement en memoire \n\n");
  printf("7. Rechercher et afficher les max/min de pouls \n\n");
  printf("8. Quitter l'application \n\n");
  printf("Entrez votre choix : ");
  scanf("%d", &choix);
  printf("\n");

  switch(choix)
  {
    case 1:
    afficherFile(Recup);
    break;

    case 2:
    printf("CROISSANT OU DECROISSANT \n");
    printf("1. Croissant \n");
    printf("2. Decroissant \n");
    scanf("%d", &choix2);

    if (choix2 == 1)
    {
        croissantT(Recup);
        afficherFile(Recup);
    }
    else if (choix2 == 2)
    {
        decroissantT(Recup);
        afficherFile(Recup);
    }
    else
    {
        printf("ERREUR");
    }
    break;

    case 3:
    printf("CROISSANT OU DECROISSANT \n");
    printf("1. Croissant \n");
    printf("2. Decroissant \n");
    scanf("%d", &choix3);

    if (choix3 == 1)
    {
        croissantP(Recup);
        afficherFile(Recup);
    }
    else if (choix3 == 2)
    {
        decroissantP(Recup);
        afficherFile(Recup);
    }
    else
    {
        printf("ERREUR");
    }
    break;

    case 4:
    tempsChoisi(Recup);
    break;

    case 5:
    moyenne(Recup);
    break;

    case 6:
    nbLigne();
    break;

    case 7:
    printf("MAXIMUM ou MINIMUM  \n");
    printf("1. MAXIMUM \n");
    printf("2. MINIMUM \n");
    scanf("%d", &choix4);
    printf("\n");

    if (choix4==1)
    {
      max(Recup);
    }
    else if (choix4 == 2)
    {
      min(Recup);
    }
    break;

    case 8:
    exit(EXIT_FAILURE);
    break;

  }
}
