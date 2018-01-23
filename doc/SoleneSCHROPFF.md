Cahier de suivi du projet de Solène Schropff
====

> Trinôme avec Claire-Victoria CARLES et Emma SAUTEL
>
> Projet sur la préparation des biberons (programmable et automatisé)


Séance du 20 décembre
----

Recherches :

- prise en main du markdown : [1](https://blog.wax-o.com/2014/04/tutoriel-un-guide-pour-bien-commencer-avec-markdown/), [2](https://openclassrooms.com/courses/redigez-en-markdown)

- [distribution de nourriture pour poissons](http://forum.arduino.cc/index.php?topic=377612.0)

- [précaution de préparation](https://www.ameli.fr/assure/sante/themes/alimentation-0-3-ans/preparer-biberon) (important pour un bébé)

- étude du fonctionnement d'une machine à café pour l'adapter au chauffe-biberon : utilisation d'un [thermoplongeur](https://www.boulanger.com/ref/51277?xtor=SEC-8827-GOO&xts=171153&origin=pla&kwd=&gclid=EAIaIQobChMIuKXGvd6Y2AIVpbftCh0Gegb-EAQYBSABEgInjfD_BwE&gclsrc=aw.ds) qui chauffe l'eau ?

- étude d'un projet en ligne de [brassage de bière](http://forum.arduino.cc/index.php?topic=379020.0) : on pourrait s'inspirer de l'utilisation de la bibliothèque [OneWire](https://playground.arduino.cc/Learning/OneWire) qui permet de mesurer la température avec un [sensor de température 1-wire](https://www.adafruit.com/product/381) (seul capteur waterproof) ([utilisation](http://www.touteladomotique.com/index.php?option=com_content&id=296:2012011501&Itemid=13))

- proposition d'une résistance chauffante afin de créer un bain marie qui va chauffer l'eau du biberon


Séance du 12 janvier
----

- création du diaporama de présentation ([modèle diapositive n°9](http://users.polytech.unice.fr/~ferrero/TPelec2/Arduino_projet.pdf))

- élaboration du schéma du bibduino ([inspiration machine à café](https://i.ytimg.com/vi/bdasYQ78Zsw/maxresdefault.jpg))

- étude des recommandations de préparation : peut aider pour l'automatisation des biberons selon l'âge ([guide préparation biberons](http://www.guidegrossesse.com/nourrir-bebe/nombre-de-biberons-et-quantite-de-lait.htm)), ou alors le parent choisit lui-même selon le poids (ml d'eau, quantité de lait en poudre, etc.)

- problématique des différents types de biberons : codage du touilleur en fonction de la contenance du biberon

- ouverture et fermeture de la trappe à poudre avec un moteur pas à pas


Séance du 19 janvier
----

- prise en main du capteur OneWire ([installation bibliothèque sur Arduino](http://www.mon-club-elec.fr/pmwiki_reference_arduino/pmwiki.php?n=Main.LibrairieOneWire)) et essai d'un [premier code](http://bildr.org/2011/07/ds18b20-arduino/)

- montage et rendu du premier code avec le capteur dans une bouteille d'eau ([x](https://www.zupimages.net/up/18/03/jbb4.png)) : on a utilisé une résistance de 10k en attendant d'en avoir une de 4.7k

- [autre code d'essai](https://github.com/PaulStoffregen/OneWire/blob/master/examples/DS18x20_Temperature/DS18x20_Temperature.pde) de la bibliothèque OneWire de Paul Stroffregen (on obtient des températures un peu plus réalistes)

- test de la résistance chauffante directement dans un générateur à 12V (comme une prise secteur) puis avec le modèle du montage du moteur à courant continu ([diapo 7](http://users.polytech.unice.fr/~ferrero/TPelec2/arduino4.pdf))


Séance du 23 janvier
----

- présentation du projet (cf [Présentation Bibduino](https://github.com/cvcarles/Bibduino/blob/master/doc/Projet%20Bibduino.pdf))

- lecture du [fonctionnement du module WiFi](https://les-electroniciens.com/videos/arduino-ep16-installation-du-module-wifi-esp8266)

- [installation de Android Studio](http://www.obzilo.com/2015/02/installer-sdk-dandroid-mac-os-x-windows-adb-fastboot.html)
