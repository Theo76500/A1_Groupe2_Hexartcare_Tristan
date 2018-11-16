#include <stdio.h>
#include <stdlib.h>

void modif(choix)
{
  FILE* fichier = NULL;
  fichier = fopen("C:\\Users\\cedri\\Desktop\\PROJET_1\\param.h", "w+");

  fputs("#define CHOIX ", fichier);
  fprintf(fichier, "%d", choix);
  fputs("\n", fichier);

  fclose(fichier);

}

void modif2()
{
    int choix2;
    printf("Quelle LED voulez-vous allumer ?\n");
    scanf("%d", &choix2);

    FILE* fichier2 =NULL;
    fichier2 = fopen("C:\\Users\\cedri\\Desktop\\PROJET_1\\param.h", "a+");
    fputs("#define CHOIX2 ", fichier2);
    fprintf(fichier2, "%d", choix2);

    fclose(fichier2);

}
