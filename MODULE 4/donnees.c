#include <stdio.h>
#include <stdlib.h>

#include "donnees.h"

/********************DONNEES************************
* donnees.c est le fichier contenant les fonctions *
* permettant le traitement de données.             *
* Lire() permet de lire le fichier .csv et         *
* d'ajouter son contenu dans une structure FILE à  *
* l'aide de la fonction ajoutFile().               *
* Comme son nom l'indique, ajoutFile() va ajouter  *
* le contenu dans la structure FILE.               *
* Enfin, afficherFile() va simplement afficher le  *
* contenu de la File.                              *
***************************************************/

Donnee * lire(Donnee *File)
{
  char tab[100];
  int temps;
  int pouls;

  FILE *csv = NULL;
  csv = fopen("C:\\USERS\\cedri\\DESKTOP\\PROJET_1\\convertisseurCSV\\fichier.csv", "r");

  while (fgets(tab, 100, csv) != NULL)        //Parcour le fichier.csv
  {
    fscanf(csv, "%d;%d", &temps, &pouls);
    File = ajoutFile(File, temps, pouls);
  }

  fclose(csv);
  return File;

}

Donnee * ajoutFile(Donnee *FILE, int element_temps, int element_pouls)
{
    Donnee *element = malloc(sizeof(*element));
    if (element == NULL)
    {
        exit(EXIT_FAILURE);
    }

    else
    {
        element->temps = element_temps;
        element->pouls = element_pouls;
        element->suivant = NULL;
        if (FILE == NULL)                           // La file est vide
        {
          FILE = element;
        }
        else
        {
          Donnee *elementActuel = FILE;             //Element Temporaire pour parcourir la file
          while (elementActuel->suivant != NULL)    // La file n'est pas vide
          {
            elementActuel = elementActuel->suivant;
          }
          elementActuel->suivant = element;
        }

    }
    return FILE;

}

void afficherFile(Donnee *FILE)
{
  if (FILE == NULL)             //La file est vide
  {
    printf("La file est vide\n");
  }

  while (!FILE == NULL)       //La file n'est pas vide
  {
    printf("temps = %d ms || pouls = %d bpm \n", FILE->temps, FILE->pouls );
    FILE = FILE->suivant;
  }
}
