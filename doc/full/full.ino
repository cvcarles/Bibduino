#include <SoftwareSerial.h>

SoftwareSerial mySerial(9,10);  //RX TX

/** BALANCE **/
#include <hx711.h>

Hx711 scale(A2,A3);


/** MOTEUR PAP **/
#include <Stepper.h>
//broches moteur
const int NombrePas = 350;
const int pas_1=2;
const int pas_2=4;
const int pas_3=3;
const int pas_4=5;
Stepper moteur(NombrePas, pas_1, pas_2, pas_3, pas_4);

int temps_ouverture = 5000; //(ms) calcul à trouver en fonction de la quantité de poudre

/** REÇUS DE L'APPLI **/
int eau = 240; // en g
int quantite = mySerial.read(); //quantite de poudre (g)

const int pin_pompe = 6 ;
const int pin_resis = 7;
int temps_chauffe = 30; // sur une base de 30s
const int poids_bibi=scale.getGram();


void setup() {
  Serial.begin(9600);
    mySerial.begin(9600);

    moteur.setSpeed(50);  // On défini la vitesse du moteur pas à pas
  pinMode(pin_pompe,OUTPUT);
  pinMode(pin_resis,OUTPUT);
  pinMode(pas_1, OUTPUT);
  pinMode(pas_2, OUTPUT);
  pinMode(pas_3, OUTPUT);
  pinMode(pas_4, OUTPUT);
  pinMode(6, OUTPUT);       //pompe

}
  
void loop() {
                                             Serial.println(quantite);

  if (scale.getGram() > 50){ //poids min biberon 
int    poids_bibi=scale.getGram();

    if (quantite!=0) {
      allume(7);          // allumage de la résistance
 fonctionnement_pap(1); 

      while(scale.getGram()<poids_bibi+quantite){
         Serial.println("Versement de la poudre en cours");
                          Serial.println(poids_bibi);
                                           Serial.println( scale.getGram());

         delay(100);
      }
 fonctionnement_pap(-1); 

  while(scale.getGram()<poids_bibi+quantite+eau-10){
                 Serial.println(poids_bibi);    
                 Serial.println(  scale.getGram());

        Serial.println("Versement de l'eau en cours");
        allume(6);

        delay(100);}
    eteint(6);    //eteint pompe
    eteint(7);    //eteint resistance
    Serial.println("bibi terminé");

    delay(5000000);
    }
   else{Serial.println("une erreur est survenue");
               delay(100);
}
   }

  else {Serial.println("Erreur: bibi non présent");
                 delay(100);}
}
int balance() {
  int mesure=scale.getGram();

    Serial.println(mesure);
    return (mesure);
}

void fonctionnement_pap(int n) {
  for (int i=1; i<=NombrePas; i++){ // boucle de defilement du nombre de pas // quelque chose à trouver
    moteur.step(n); // un pas en sens positif/negatif
  }
}

void moteur_pap() { //pour la poudre 
  Serial.println("ça tourne");
  fonctionnement_pap(1); //ouverture moteur
  
  delay(temps_ouverture); 
  fonctionnement_pap(-1); //fermeture moteur
}



void allume(int pin_pomp) {     
  digitalWrite(pin_pomp,HIGH);
}

void eteint(int pin_comp) {
  digitalWrite(pin_comp,LOW);
}
