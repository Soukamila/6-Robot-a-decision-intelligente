# 6-Robot-a-decision-intelligente
Formation : Robotique et Intelligence Artificielle — EIC 3.0 ;
Formatteur : Carlos Yfrazin

Étudiante : LUMERANT Laisha Mitsouka

Plateforme utilisée : Wokwi;
Carte utilisée : ESP32

1. Présentation du projet
Ce projet consiste à créer un petit système intelligent capable de prendre une décision automatiquement en fonction de la distance mesurée par un capteur ultrasonique.
Le système utilise une carte ESP32, un capteur HC-SR04, une LED rouge et un buzzer. Lorsque la distance entre le capteur et un objet est inférieure ou égale à 20 cm, la LED s’allume et le buzzer émet un son. Lorsque l’objet se trouve à une distance supérieure à 20 cm, la LED s’éteint et le buzzer s’arrête.

2. Objectifs du devoir
•	Découvrir la programmation d’une carte ESP32.
•	Utiliser un capteur pour mesurer la distance d’un objet.
•	Définir un seuil de déclenchement.
•	Programmer une décision automatique à partir d’une mesure.
•	Utiliser une LED et un buzzer comme moyens d’alerte.
•	Tester le système dans un environnement de simulation.

3. Composants utilisés
Composant	Rôle
ESP32	Exécute le programme et prend la décision.
Capteur ultrasonique HC-SR04	Mesure la distance entre le capteur et un objet.
LED rouge	Signale visuellement qu’un objet est trop proche.
Résistance de 220 Ω	Limite le courant traversant la LED.
Buzzer	Émet un signal sonore d’alerte.
Fils de connexion	Assurent les connexions entre les composants.
Wokwi	Permet de construire et de tester le circuit virtuellement.

4. Principe de fonctionnement
Le capteur HC-SR04 mesure la distance en utilisant des ultrasons. L’ESP32 récupère cette mesure et la compare à un seuil fixé à 20 cm.
Distance mesurée	Décision	Résultat
Inférieure ou égale à 20 cm	Objet trop proche	LED allumée et buzzer actif
Supérieure à 20 cm	Situation normale	LED éteinte et buzzer arrêté
Cette logique permet au système de réagir automatiquement sans intervention humaine.

5. Résultats obtenus
Plusieurs tests ont été réalisés dans Wokwi en modifiant la distance du capteur.
Distance testée	Résultat observé
2 cm	LED allumée et buzzer actif
14 cm	LED allumée et buzzer actif
92 cm	LED éteinte et buzzer arrêté
Les résultats observés correspondent au comportement attendu du programme. Le système détecte la proximité d’un objet et déclenche une alerte visuelle et sonore lorsque la distance est inférieure ou égale au seuil défini.
