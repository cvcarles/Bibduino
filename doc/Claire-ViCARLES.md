# Suivi de projet de Claire-Victoria CARLES

  ## Séance du mercredi 20 décembre



Mise en place du fonctionnement global du projet


Recherches:

  + Comment chauffer de l'eau comme une machine à café: https://www.youtube.com/watch?v=_8Z0I7mxfMQ 
  
  Conclusion: on peut chauffer grâce au principe de bain marie avec une résistance immergée. Une fois la température atteinte, l'eau se verse dans le biberon.
  
  + Recherche de machine à biberon déjà faite: 
  Préparateur de biberons [Formula Pro baby brezza](https://www.youtube.com/watch?v=9HBh39_rbGg) avec comme problème l'impossibilité de régler la température (37°C obligatoire) ni de un dosage entre 60 et 120 ml
  
 + Babynes de Nestlé : problème est que les capsules pré-dosées sont faites uniquement avec du lait Nestlé (cher et ne correspondant pas forcement à tous les enfants)
  
  + Comment doser la poudre ? système comme les nourrisseurs automatiques pour poisson (trape réglable)
  
  -----------------------------------
  
  ## Séance du vendredi 12 Janvier 
  
 * La necessité d'utiliser une balance de manière à savoir si un biberon est placé sous la machine est ressortie. [balance]( https://fr.aliexpress.com/item/Elecrow-Weight-Sensor-Load-Cell-Kits-DIY-Electronic-Scales-Weight-for-Arduino-HX711-Amplifier-Low-Standby/32806983774.html?spm=a2g0w.search0302.3.2.613742f7S0hrpR&ws_ab_test=searchweb0_0,searchweb201602_0_10152_10151_10613_10615_10614_10059_10314_10534_10084_100031_10083_10184_10305_10304_10307_10604_10306_10341_10065_10142_10340_10068_10343_10342_10103_10344_10302,searchweb201603_0,ppcSwitch_0&algo_pvid=83425211-7640-4ccd-b8e1-683985dd24b6&algo_expid=83425211-7640-4ccd-b8e1-683985dd24b6-0)
 
    
* Réalisation d'un schéma explicatif du projet afin de se repérer dans les tâches à accomlir
 
* Réflexion sur les composants necessaires: [un fouet](https://www.spi-discount.net/fr/ustensiles-cuisine/1512-emulsionneur-3700606462321.html)(ou un [fouet spécial biberon sans Bisphénol A](https://www.roseoubleu.com/fr/melangeur-antigrumeaux-pour-biberon-2225-accessoires-biberon) ou [autre moins cher](http://www.lesmeresnature.com/nos-biberons/950product.html)), un moteur à pas pour le dosae de la poudre, la découpe d'une pièce ronde avec deux trous opposés à 12h et 6h et rien à 3h et 9h, une balance, un engrenage à crémaillère pour le fouet(le monter et le faire tourner), une résistance pour chauffer l'eau.

* On aura besoin du logiciel Librecad afin de dessiner les pièces à "imprimer" au laser

* contenance su bac à eau: 750 ml correspondant à 3 biberons de taille maximale de contenace 250 ml de manièreb à ne pas laisser l'eau trop longtemps dans le reservoir
 
 ----------------------------------
   ## Curiosité du samedi 13 Janvier 
   
   Et si on mettait l'eau après la poudre, peut-être que cela éviterait d'avoir à mélanger?!
  
  D'après ce papa [ici](https://www.je-suis-papa.com/test-bib-expresso-beaba/) et [ici](https://lily2b.wordpress.com/2012/06/13/leau-ou-la-poudre/),il semble être possible de mettre la poudre avant le lait.

Et si on mélangeait la poudre et l'eau chaude avant que le mélange ne tombe dans le biberon?

----------------------------------
   ## Vendredi 19 Janvier 

[schéma montage capteur température](http://www.pihomeserver.fr/2013/10/29/raspberry-pi-home-server-utiliser-sonde-temperature-etanche-ds18b20/)

résistance chauffante de 12 Ohm,pour 12 V, on a presque 1 Ampère + Transistor

Réalisation du diagramme de Grantt

Choses à faire:

* tester les différents composants, code (balance, thermomètre, moteurs (engrenage poudre, peut être fouet), résistance)

* touver comment faire monter / verser l'eau

* doser le lait

* créer les pièces/ acheter : contenant à eau, cache pour que ce bac puisse s'ouvrir, contenant à lait en poudre, pièces qui dose/mélange rondes

* créer l'application android

* assembler le tout

----------------------------------
   ## Mardi 23 Janvier 
   
   Présentation orale du projet

  [étude de la pompe](http://stockage.univ-valenciennes.fr/EcoPEM/BoiteK/co/K1_P.html) et (https://www.youtube.com/watch?v=_uqUW86VlhQ)

faire un réhausseur de bibi avec la balance: 

----------------------------------
   ## Mardi 6 Février 
   
   essai de programmer le module wifi : echec à réessayer à la maison
   
   TX arduino = PB3 pin 11
   RX arduino = PB2 pin 10
   [doc sur le module wifi](https://www.cnx-software.com/2015/04/18/nodemcu-is-both-a-breadboard-friendly-esp8266-wi-fi-board-and-a-lua-based-firmware/)

https://www.youtube.com/watch?v=MN9-_hOpf_c

vendredi 9 février: succès: on parvient à allumer et éteindre une LED depuis un navigateur web

dans gestionnaire de carte: utiliser NodeMCU 0.9 (ESP 12 Module)  vec comme baud: 115200
[image des pins du wifi](https://www.cnx-software.com/wp-content/uploads/2015/04/NodeMCU_Pinout.png)

http://les-electroniciens.com/videos/arduino-ep16-installation-du-module-wifi-esp8266

[code](https://github.com/viveksharanappa/codefromhereandthere/blob/master/BLINK_CONTROL_WEB.ino)

[le génial](http://www.instructables.com/id/Quick-Start-to-Nodemcu-ESP8266-on-Arduino-IDE/)


----------------------------------
   ## Jeudi 22 Février 

programmation moteur pas à pas:

 /+ -> 5V                 PD2 -> IN1           PD4 -> IN3
 
 /- ->GND                 PD3 -> IN2           PD5 -> IN4

[aide youtube](https://www.youtube.com/watch?v=3xi1yVRDFLE) 

----------------------------------
 ## Jeudi 15 Mars 

programmation de la balance: enfin un succès après de nombreux échecs

----------------------------------
 ## Mardi 27 Mars 

essai de l'utilisation de la nouvelle pompe: échec, la ULN2803A a claqué en suivant ce schéma: 

[essayer](https://www.google.fr/url?sa=i&rct=j&q=&esrc=s&source=images&cd=&cad=rja&uact=8&ved=2ahUKEwjF7KqujZTaAhVMwBQKHZiNA7IQjRx6BAgAEAU&url=http%3A%2F%2Fwww.learnerswings.com%2F2014%2F04%2Fcontrol-dc-motor-using-arduino-and.html&psig=AOvVaw3U6EXUAjIZLKw1Eo9xpZSE&ust=1522501262439695) au prochain cours

----------------------------------
 ## Mercredi 4 avril
  Présentation de mi-parcours
  Succès du branchement de la pompe (directement sur le générateur)
  
  ----------------------------------
 ## Jeudi 12 avril
Réflexions sur ls forme de la machine
démontage de la machine achetée de manière à comprendre son fonctionnement et à garder seulement les pièces necessaires à notre projet. Par la suite, on a réalisé que le socle devait être plat (et non creusé comme celui que l'on a actuellement). J'ai donc réalisé le socle en 3D sur inventor pour pouvoir l'imprimer

 ----------------------------------
 ## Vendredi 13 avril
Impression du socle au fablab. Durée d'impression: 14h

----------------------------------
 ## Mardi 17 avril
On continue de chercher la forme idéale de la machine (par où faire passer les tuyaux...)

----------------------------------
 ## Vendredi 20 avril
Après midi au fablab pour perser/découper notre machine originale. Découpage laser d'une pièce ronde pour adapter la "vis" au moteur. Adaptation du socle imprimé au receptacle supérieur.

----------------------------------
 ## Jeudi 26 avril
pourquoi le moteur pas à pas s'obstine à tourner dans un seul sens ?! Réponse: les pattes devaient être branchées en 2,4,3,5 et pas dans l'ordre croissant.

convention pour l'ordre de rotation du moteur: poudre, eau, arrêt sur le trou bouché où l'eau passe de manière à empêcher la poudre de couler


algorithme général:
  *commande par wifi
  
