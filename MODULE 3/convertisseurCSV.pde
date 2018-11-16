//From Arduino to Processing to Txt or cvs etc.
//import
import processing.serial.*;                        //bibliothèque
//declare
PrintWriter output;
Serial udSerial;

void setup() {
  udSerial = new Serial(this, "COM6", 9600);        //situe sur qu'elle port se trouve la carte arduino
  output = createWriter ("fichier.csv");         //Création d'un fichier "batement.csv"
  delay (100);
}

  void draw() {
    if (udSerial.available() > 0) {                 //si le port n'est pas vide
      delay(100);
      String SenVal = udSerial.readString();        //Lecture des characteres
      delay(100);
      if (SenVal != null) {                         
        delay(100);
        output.println(SenVal);                     //si donnée non NUL les données sont retranscrite dans le fichier "batements.csv"
      }
    }
  }

  void keyPressed(){                                 //si une touche est presser
    output.flush();                                  //arret de l'éxecution du programme
    output.close();                                  //fermeture du programme
    exit(); 
  }
