#include <RCReader.h>

// Définir la broche du canal à tester
int channelPins[1] = {3}; // Une seule broche pour un canal
RCReader rc(channelPins, 1); // Créer une instance de RCReader pour un canal

void setup() {
    Serial.begin(9600);
    Serial.println("Test d'un seul canal démarré !");
}

void loop() {
    // Lire la valeur du canal
    rc.read();

    // Afficher la valeur mesurée dans le moniteur série
    Serial.print("Valeur PWM (Ch1) : ");
    Serial.print(rc.getChannelValue(0)); // Lire la valeur du canal 1 (index 0)
    Serial.println(" µs");

    delay(100); // Petite pause pour éviter de saturer le moniteur série
}
