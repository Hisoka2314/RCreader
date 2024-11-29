#include "RCReader.h"

RCReader::RCReader(int* channelPins, int numChannels) {
    _numChannels = numChannels;
    _channelPins = channelPins;

    _channelValues = new int[_numChannels];

    for (int i = 0; i < _numChannels; i++) {
        pinMode(_channelPins[i], INPUT);
    }
}

void RCReader::read() {
    for (int i = 0; i < _numChannels; i++) {
        _channelValues[i] = pulseIn(_channelPins[i], HIGH);
    }
}

int RCReader::getChannelValue(int channel) {
    if (channel >= 0 && channel < _numChannels) {
        return _channelValues[channel];
    }
    return 0; 
}