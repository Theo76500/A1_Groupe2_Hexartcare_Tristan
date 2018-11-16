#include <stdio.h>
#include <stdlib.h>

#include "action.h"
#include "menu.h"
#include "donnees.h"

/********************ACTION*********************
* action.c est le fichier contenant toutes les *
* fonctions nécessaire au fonctionnement du    *
* menu. Chaque fonction corresponds à une      *
* fonctionnalité du menu.                      *
***********************************************/

void croissantT(Donnee *File)
{
  int tri_fait = 0;
  int memoire_temps = 0;
  int memoire_pouls = 0;

  while (tri_fait==0)                 //tri n'est pas fait
  {
    Donnee *element = NULL;
    element = File;
    tri_fait=1;

    while (element->suivant != NULL)   //on est pas à la fin de la liste
    {
      Donnee *suivant = NULL;
      suivant = element -> suivant;


      if (element->temps > suivant->temps)  //si l'élément actuel est plus grand que le suivant
      {
        memoire_temps = element -> temps;   //on switch les valeurs
        memoire_pouls = element -> pouls;
        element -> temps = suivant -> temps;
        element -> pouls = suivant -> pouls;
        suivant -> temps = memoire_temps;
        suivant -> pouls = memoire_pouls;

        tri_fait=0;


      }
      element = element -> suivant;
    }
  }
}

void decroissantT(Donnee *File)
{
  int tri_fait = 0;
  int memoire_temps = 0;
  int memoire_pouls = 0;

  while (tri_fait==0)                             //tri n'est pas fait
  {
    Donnee *element = NULL;
    element = File;
    tri_fait=1;

    while (element->suivant != NULL)              //on est pas à la fin de la liste
    {
      Donnee *suivant = NULL;
      suivant = element -> suivant;


      if (element->temps < suivant->temps)        //si l'élément actuelle est inférieur au suivant
      {
        memoire_temps = element -> temps;         //on switch les valeurs
        memoire_pouls = element -> pouls;
        element -> temps = suivant -> temps;
        element -> pouls = suivant -> pouls;
        suivant -> temps = memoire_temps;
        suivant -> pouls = memoire_pouls;

        tri_fait=0;


      }
      element = element -> suivant;
    }
  }
}

void croissantP(Donnee *File)
{
  int tri_fait = 0;
  int memoire_temps = 0;
  int memoire_pouls = 0;

  while (tri_fait==0)                 //tri n'est pas fait
  {
    Donnee *element = NULL;
    element = File;
    tri_fait=1;

    while (element->suivant != NULL)   //on est pas à la fin de la liste
    {
      Donnee *suivant = NULL;
      suivant = element -> suivant;


      if (element->pouls > suivant->pouls)  //si l'élément actuel est plus grand que le suivant
      {
        memoire_temps = element -> temps;   //on switch les valeurs
        memoire_pouls = element -> pouls;
        element -> temps = suivant -> temps;
        element -> pouls = suivant -> pouls;
        suivant -> temps = memoire_temps;
        suivant -> pouls = memoire_pouls;

        tri_fait=0;


      }
      element = element -> suivant;
    }
  }
}

void decroissantP(Donnee *File)
{
  int tri_fait = 0;
  int memoire_temps = 0;
  int memoire_pouls = 0;

  while (tri_fait==0)                             //tri n'est pas fait
  {
    Donnee *element = NULL;
    element = File;
    tri_fait=1;

    while (element->suivant != NULL)              //on est pas à la fin de la liste
    {
      Donnee *suivant = NULL;
      suivant = element -> suivant;


      if (element->pouls < suivant->pouls)        //si l'élément actuelle est inférieur au suivant
      {
        memoire_temps = element -> temps;         //on switch les valeurs
        memoire_pouls = element -> pouls;
        element -> temps = suivant -> temps;
        element -> pouls = suivant -> pouls;
        suivant -> temps = memoire_temps;
        suivant -> pouls = memoire_pouls;

        tri_fait=0;


      }
      element = element -> suivant;
    }
  }
}

void moyenne(Donnee *File)
{

  Donnee *element = NULL;
  element = File;

  int minimum,maximum;
  int nb_pouls=0;
  int sommePouls=0;
  int moyenne;

  printf("Quelle est le temps minimum en ms que vous voulez pour votre plage de temps ? ");
  scanf("%d",&minimum);
  printf("Quelle est le temps maximum en ms que vous voulez pour votre plage de temps ? ");
  scanf("%d",&maximum);

  while(element != NULL)                                    //parcours la file
  {
    if(element->temps <= maximum && element->temps >= minimum)      // Si le temps de l'élément est compris entre la max et le min
    {
      nb_pouls++;
      sommePouls = sommePouls + element->pouls;
    }
    element = element -> suivant;
  }

  if (nb_pouls>0){                                                     //si nombre de pouls eqt suppérieur à 0
    moyenne = sommePouls / nb_pouls;
    printf("La moyenne des pouls compris entre %d ms et %d ms est de %d\n", minimum, maximum, moyenne);
  }

  else{
    printf("Il n'y a pas de pouls dans cette plage de temps donnees\n");
  }
}

void tempsChoisi(Donnee *File)
{

  int tempschoix;
  int poulstrouve;
  int i=0;

  Donnee *element = NULL;
  element = File;

  printf("Choisissez un temps : ");
  scanf("%d", &tempschoix);

  while(element != NULL)                      //parcours la file
  {
    if (element->temps == tempschoix)         //Si le temps correspondant à une ligne précise de la file est égal au temps choisi
    {
      poulstrouve = element->pouls;
      printf("\n Au temps precis de %d ms nous trouvons un pouls de %d bpm \n",tempschoix,poulstrouve);
      i++;                                    //on incrémente le conmpteur pour dire qu'il y'a un pouls à un temps précis
      break;
    }

    element = element -> suivant;

  }

  if (i==0)
  {
    printf("\n Il n'y a pas de pouls a ce temps precis dans le fichier csv\n");
  }
}

void nbLigne()
{
  int nb=0;
  int c;
  FILE* csv = NULL;
  csv = fopen("fichier.csv", "r");
  while((c = getc(csv)) != EOF)       //parcours le fichier tant que C est différent de EOF
  {
    if (c=='\n'){                     //si C est égal à "retour à la ligne"
      nb++;
    }
  }
  printf("Le fichier csv contient %d lignes.\n",nb);
}

void max(Donnee *File)
{
  decroissantP(File);      //tri par décroissant pour avoir la plus grande valeur au début de la liste
  printf("Le pouls maximum est de %d bpm avec un temps associe de %d ms \n",File->pouls,File->temps);

}

void min(Donnee *File)
{
  croissantP(File);       //tri par croissant pour avoir la plus petite valeur au début de la liste
  printf("Le pouls minimum est de %d bpm avec un temps associe de %d ms\n", File->pouls,File->temps);
}
