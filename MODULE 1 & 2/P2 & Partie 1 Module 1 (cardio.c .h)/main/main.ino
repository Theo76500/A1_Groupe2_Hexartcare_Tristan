#include "cardio.h"
#include "coeur.h"
#include "param.h"


int analog ,t1=0 ,t2=0;


void setup() {
  Serial.begin(9600);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);    //sortie des pin 2 à 11
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT); 
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
}

void loop() {

  int bpm;
  analog=analogRead(A0);  // lecture de la valeur de a0
  
  if (analog > 4){        // si cette valeur effectue un pic alors
    
    t1= millis();
    coeur();              //Utilisation de la fonction qui actionne le coeur de led
                         
    int deltaT=t1-t2;    
    bpm=60000/(deltaT);   //calcul du pouls
    
    affiche_pouls(bpm);   //fonction affichant le pouls en style csv
  }

  t2=t1;     


}
