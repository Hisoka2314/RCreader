#ifndef RCReader_h
#define RCReader_h

#include "Arduino.h"

class RCReader {
public:
    RCReader(int* channelPins, int numChannels);

    void read();

    int getChannelValue(int channel);

private:
    int* _channelPins;       // Tableau des broches des canaux
    int* _channelValues;     // Tableau pour stocker les valeurs lues
    int _numChannels;        // Nombre total de canaux
};

#endif