#include <RCReader.h>

// Définir les broches des canaux
#define NUM_CHANNELS 6
int channelPins[NUM_CHANNELS] = {2, 3, 4, 5, 6, 7};

// Créer une instance de RCReader
RCReader rc(channelPins, NUM_CHANNELS);

void setup() {
    Serial.begin(9600);
    Serial.println("Test RCReader démarré !");
}

void loop() {
    // Lire toutes les valeurs des canaux
    rc.read();

    // Afficher les valeurs des canaux dans le moniteur série
    Serial.print("Canaux : ");
    for (int i = 0; i < NUM_CHANNELS; i++) {
        Serial.print("Ch");
        Serial.print(i + 1);
        Serial.print(": ");
        Serial.print(rc.getChannelValue(i));
        Serial.print(" us  ");
    }
    Serial.println();
    delay(100);
}
