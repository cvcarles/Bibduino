#include <Stepper.h>

//BranchÃ© sur les ports 2, 3, 4 et 5 de la carte arduino
const int NombrePas=350; // Nombre de pas du servomoteur 
const int Pas_1=2; //declaration constante de broche 
const int Pas_2=4; //declaration constante de broche 
const int Pas_3=3; //declaration constante de broche 
const int Pas_4=5; //declaration constante de broche 
Stepper moteur(NombrePas, Pas_1, Pas_2, Pas_3, Pas_4);  // crÃ©e un objet Stepper pour contrÃ´ler le moteur pas Ã  pas


void setup() {

  moteur.setSpeed(50);  // On dÃ©fini la vitesse du moteur pas Ã  pas
pinMode(Pas_1, OUTPUT); //met la broche en sortie 
pinMode(Pas_2, OUTPUT); //met la broche en sortie 
pinMode(Pas_3, OUTPUT); //met la broche en sortie 
pinMode(Pas_4, OUTPUT); //met la broche en sortie 

}

void loop() {
for (int i=1; i<=NombrePas; i++){ // boucle de dÃ©filement du nombre de pas
  moteur.step(1); // un pas en sens positif
}

delay(100); 

for (int i=1; i<=NombrePas; i++){ // boucle de dÃ©filement du nombre de pas
  moteur.step(-1); // un pas en sens nÃ©gatif
}



}

