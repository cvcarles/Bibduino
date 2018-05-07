/** BALANCE **/
#include <hx711.h>
int Hx711.DOUT = ...; //balance, jaune SCL (analogique)
int Hx711.SCK = ...; //balance, blanc SDA (analogique)
Hx711 scale(Hx711.DOUT, Hx711.SCK);


/** MOTEUR PAP **/
#include <Stepper.h>
//broches moteur
int NombrePas = 350;
const int pas_1=...;
const int pas_2=...;
const int pas_3=...;
const int pas_4=...;
Stepper moteur(NombrePas, pas_1, pas_2, pas_3, pas_4);

int temps_ouverture = ...;


/** REÇUS DE L'APPLI **/
int poids = ...; //poids bebe (kg)
int quantite = ...; //quantite de poudre (kg)

int pin_pompe = ...;
int pin_resis = ...;
int temps_chauffe = ...;



void setup() {
  Serial.begin(9600);
  pinMode(pin_pompe,OUTPUT);
  pinMode(pin_resis,OUTPUT);
  pinMode(pas_1, OUTPUT);
  pinMode(pas_2, OUTPUT);
  pinMode(pas_3, OUTPUT);
  pinMode(pas_4, OUTPUT);
}



void loop() {
  if (balance() > 100) //poids min biberon {
    if (poids != null) {
      int quantite_calc = poids*1000/10 + 250;
      moteur_pap(quantite_calc);
    }
    else if (poids = null && quantite != null) {
      moteur_pap(quantite);
    }
    allume(pin_resis);
    allume(pin_pompe);
    delay(temps_chauffe);
    eteint(pin_pompe);
    eteint(pin_resis);
    
    
  }

  else {
    Serial.println("Erreur");
  }

}


int balance() {
  Serial.print(scale.getGram(), 1);
  Serial.println(" g");
  delay(400);
  return (scale.getGram());
}

void fonctionnement_pap(int n) {
  for (int i=1; i<=balance(); i++){ // boucle de defilement du nombre de pas
    moteur.step(n); // un pas en sens positif/negatif
  }
}

void moteur_pap(quantite) {
  fonctionnement_pap(1); //ouverture moteur
  delay(temps_ouverture); 
  fonctionnement_pap(-1); //fermeture moteur
}

void allume(int pin_comp) {
  digitalWrite(pin_comp,HIGH);
}

void eteint(int pin_comp) {
  digitalWrite(pin_comp,LOW);
}






