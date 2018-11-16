
#include <Arduino.h>
#include "coeur.h"
#include "param.h"


void coeur()
{
  if (CHOIX==1)
  {
    Toutes();
  }
  else if (CHOIX==2)
  {
    UnSurDeux();
  }
  else if (CHOIX==3)
  {
    UnSurTrois();
  }
  else if (CHOIX==4)
  {
    Chenille();
  }
  else if (CHOIX==5)
  {
    Chenille2();
  }

  else if (CHOIX==6){
    ledAuChoix
  }
}

void Toutes()
{
  digitalWrite(2, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(8, HIGH);
  digitalWrite(9, HIGH);
  digitalWrite(10, HIGH);
  digitalWrite(11, HIGH);

  delay(100);

  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  digitalWrite(7, LOW);
  digitalWrite(8, LOW);
  digitalWrite(9, LOW);
  digitalWrite(10, LOW);
  digitalWrite(11, LOW);

  delay(1000);
}



void UnSurDeux()
{
  digitalWrite(2, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(8, HIGH);
  digitalWrite(10, HIGH);

  delay(100);

  digitalWrite(2, LOW);
  digitalWrite(4, LOW);
  digitalWrite(6, LOW);
  digitalWrite(8, LOW);
  digitalWrite(10, LOW);

  delay(1000);
}


void UnSurTrois()
{
  digitalWrite(2, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(8, HIGH);
  digitalWrite(11, HIGH);

  delay(100);

  digitalWrite(2, LOW);
  digitalWrite(5, LOW);
  digitalWrite(8, LOW);
  digitalWrite(11, LOW);
}


void Chenille()
{
  digitalWrite(2, HIGH);

  delay(100);

  digitalWrite(2,LOW);
  digitalWrite(3, HIGH);

  delay(100);

  digitalWrite(3, LOW);
  digitalWrite(4, HIGH);

  delay(100);

  digitalWrite(4, LOW);
  digitalWrite(5, HIGH);

  delay(100);

  digitalWrite(5, LOW);
  digitalWrite(6, HIGH);

  delay(100);

  digitalWrite(6, LOW);
  digitalWrite(7, HIGH);

  delay(100);

  digitalWrite(7, LOW);
  digitalWrite(8, HIGH);

  delay(100);

  digitalWrite(8, LOW);
  digitalWrite(9, HIGH);

  delay(100);

  digitalWrite(9, LOW);
  digitalWrite(10, HIGH);

  delay(100);

  digitalWrite(10, LOW);
  digitalWrite(11, HIGH);

  delay(100);

  digitalWrite(11, LOW);
}


void Chenille2()
{
  digitalWrite(2, HIGH);

  delay(400);

  digitalWrite(2,LOW);
  digitalWrite(3, HIGH);

  delay(400);

  digitalWrite(3, LOW);
  digitalWrite(4, HIGH);

  delay(400);

  digitalWrite(4, LOW);
  digitalWrite(5, HIGH);

  delay(400);

  digitalWrite(5, LOW);
  digitalWrite(6, HIGH);

  delay(400);

  digitalWrite(6, LOW);
  digitalWrite(7, HIGH);

  delay(400);

  digitalWrite(7, LOW);
  digitalWrite(8, HIGH);

  delay(400);

  digitalWrite(8, LOW);
  digitalWrite(9, HIGH);

  delay(400);

  digitalWrite(9, LOW);
  digitalWrite(10, HIGH);

  delay(400);

  digitalWrite(10, LOW);
  digitalWrite(11, HIGH);

  delay(400);

  digitalWrite(11, LOW);
  digitalWrite(10, HIGH);

  delay(400);

  digitalWrite(10,LOW);
  digitalWrite(9, HIGH);

  delay(400);

  digitalWrite(9, LOW);
  digitalWrite(8, HIGH);

  delay(400);

  digitalWrite(8, LOW);
  digitalWrite(7, HIGH);

  delay(400);

  digitalWrite(7, LOW);
  digitalWrite(6, HIGH);

  delay(400);

  digitalWrite(6, LOW);
  digitalWrite(5, HIGH);

  delay(400);

  digitalWrite(5, LOW);
  digitalWrite(4, HIGH);

  delay(400);

  digitalWrite(4, LOW);
  digitalWrite(3, HIGH);

  delay(400);

  digitalWrite(3, LOW);
  digitalWrite(2, HIGH);
}

void ledAuChoix(){
  digitalWrite(CHOIX2,HIGH);
}
