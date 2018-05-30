/** RX TX **/
#include <SoftwareSerial.h>
SoftwareSerial mySerial(9,10);  

/** BALANCE **/
#include <hx711.h>
Hx711 scale(A2,A3);
const int poids_bibi = scale.getGram();

/** MOTEUR PAP **/
#include <Stepper.h>
//broches moteur
const int NombrePas = 350;
const int pas_1=2;
const int pas_2=4;
const int pas_3=3;
const int pas_4=5;
Stepper moteur(NombrePas, pas_1, pas_2, pas_3, pas_4);



/** INITIALISATION PINS POMPE ET RESISTANCE **/
const int pin_pompe = 7 ;
const int pin_resis = 8;


void setup() {
  Serial.begin(9600);
  mySerial.begin(4800);

  moteur.setSpeed(50);  // On définit la vitesse du moteur pas à pas
  pinMode(pin_pompe,OUTPUT);
  pinMode(pin_resis,OUTPUT);
  pinMode(pas_1, OUTPUT);
  pinMode(pas_2, OUTPUT);
  pinMode(pas_3, OUTPUT);
  pinMode(pas_4, OUTPUT);
}

void loop() {
  
  int quantite = mySerial.read()-0; //quantite de poudre (g)
  int eau = quantite*6; // en ml

  Serial.println("Quantité désirée : ");
  Serial.println(quantite);
            
  if (scale.getGram() > 10){ //poids min biberon 
    int poids_bibi = scale.getGram();
      if (quantite>0) {
        allume(pin_resis);          // allumage de la résistance
        fonctionnement_pap(1);      // ouverture du pap

      while(scale.getGram()<poids_bibi+quantite){
         Serial.println("Versement de la poudre en cours");
         Serial.println(poids_bibi);
         Serial.println(scale.getGram());
      }
      fonctionnement_pap(-1); //fermeture du pap

      while(scale.getGram()<poids_bibi+quantite+eau-10){
          Serial.println("Versement de l'eau en cours");
          Serial.println(poids_bibi);    
          Serial.println(scale.getGram());
          allume(pin_pompe);  // allumage de la pompe
      }
                 
    eteint(pin_pompe);    //eteint pompe
    eteint(pin_resis);    //eteint resistance
    
    Serial.println("bibi terminé");

    delay(5000000);
    }
   else { Serial.println("une erreur est survenue"); }
   }

  else { Serial.println("Erreur: bibi non présent"); }
}


/** FONCTIONS **/
int balance() {
  int mesure=scale.getGram();
  return (mesure);
}

void fonctionnement_pap(int n) {
  for (int i=1; i<=NombrePas; i++){ // boucle de defilement du nombre de pas
    moteur.step(n); // un pas en sens positif/negatif
  }
}

void allume(int pin_comp) {     
  digitalWrite(pin_comp,HIGH);
}

void eteint(int pin_comp) {
  digitalWrite(pin_comp,LOW);
}
