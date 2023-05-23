#include <iostream>
#include <string.h>
#include <stdexcept>
using namespace std;

#ifndef TRACK_H
#define TRACK_H

class Track {
private:
    string trackName;
    int length;
    double topSpeedPct;
    double highHandlingPct;
    double mediumHandlingPct;
    double cruiseSpeedPct;

public:
    Track(string Name, int Length, double TopSpeedPct, double HighHandlingPct, double MediumHandlingPct, double CruiseSpeedPct);

    void display();
    string getTrackName();
    int getLength();
    double getTopSpeedPct();
    double getHighHandlingPct();
    double getMediumHandlingPct();
    double getCruiseSpeedPct();
};

#endif