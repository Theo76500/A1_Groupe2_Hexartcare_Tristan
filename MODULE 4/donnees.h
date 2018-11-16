#ifndef DONNEES_H
#define DONNEES_H

typedef struct Donnee
{
  int pouls;
  int temps;
  struct Donnee *suivant;
}Donnee;

Donnee * lire(Donnee *FILE);
Donnee * ajoutFile(Donnee *FILE, int element_temps, int element_pouls);
void afficherFile(Donnee *FILE);

#endif
