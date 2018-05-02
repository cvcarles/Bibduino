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

- lecture du [fonctionnement du module WiFi](http://blog.rexave.net/tutoriel-esp8266-esp07/)

- [installation de Android Studio](http://www.obzilo.com/2015/02/installer-sdk-dandroid-mac-os-x-windows-adb-fastboot.html) (plusieurs problèmes d'installation de SDK rencontrés, réseau wifi de l'école assez lent pour télécharger...)


Séances du 6 et 22 février
----

- lecture du cours [OpenClassrooms sur Android Studio](https://openclassrooms.com/courses/creez-des-applications-pour-android) et 1ers tests avec Android Studio


Séance du 15 mars 2018
----

- utilisation de [App Inventor](http://ai2.appinventor.mit.edu/) en ligne (après avoir compris qu'apprendre à coder depuis 0 une application pouvait se révéler très chronophage)

- première contrainte : existe-t-il une possibilité de connectivité wi-fi avec App Inventor ? [x (vidéo à visionner)](https://www.youtube.com/watch?v=ZH7ufemP8e0)

- mise en forme de l'application : possibilité de choisir le poids pour un biberon "automatisé" [x](https://www.notrefamille.com/forum/le-coin-des-bebes-0-3-ans/diversification-alimentaire/calcul-quantite-lait-biberon-selon-poids-du-bebe-t260794.html) avec un code Arduino qui utiliserait une fonction du poids OU choisir soi-même le dosage en ml du biberon [x](https://www.babycenter.fr/a1500097/quel-dosage-de-lait-en-poudre-pour-le-biberon-de-mon-b%C3%A9b%C3%A9-)

- installation de [l'émulateur d'App Inventor](http://appinventor.mit.edu/explore/ai2/mac.html)


Séance du 27 mars 2018
----

- aperçu de l'application grâce à l'émulateur [x](https://zupimages.net/up/18/13/edq9.png)

- installation de la [carte wifi ESP9266](http://www.instructables.com/id/Quick-Start-to-Nodemcu-ESP8266-on-Arduino-IDE/)


Séance du 4 avril 2018
----

- présentation de mi-parcours ([ppt](https://github.com/cvcarles/Bibduino/blob/master/doc/Bibduino(mi-parcours).pdf))

- continuation de l'application, découverte des blocks sur AppInventor (d'après [cette](https://www.youtube.com/watch?v=ZH7ufemP8e0) vidéo magique), possibilité de connecter le clickage du bouton de lancement de l'application à l'adresse IP de l'Arduino


BONUS - 12/13 avril 2018
----

- conception et impression de la pièce au fablab


Séance du 17 avril 2018
----

- lecture d'un post sur la réception de données d'AppInventor par l'Arduino ([x](https://openclassrooms.com/forum/sujet/reception-de-donnees-arduino-app-inventor-2))

- [site bien utile](http://appinventor.mit.edu/explore/content/basic.html) pour concevoir sur AppInventor

- [différentes extensions](https://puravidaapps.com/extensions.php) (dont wifi) pour AppInventor

- continuation de l'application, mise en place des différents blocks...


Séance du 2 mai 2018
----

- mise en place du programme Arduino

- ajout d'une puce [ULN2803](https://wiki.mchobby.be/index.php?title=ULN2803-Sch%C3%A9ma) pour pouvoir contrôler la résistance chauffante
