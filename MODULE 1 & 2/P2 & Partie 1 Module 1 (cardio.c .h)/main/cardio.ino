#include <Arduino.h>
#include "cardio.h"

void affiche_pouls(int bpm){
    Serial.print(millis());
    Serial.print(";");
    Serial.println(bpm);
}
