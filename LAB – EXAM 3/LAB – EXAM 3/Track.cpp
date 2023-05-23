#include "Track.h"

Track::Track(string Name, int Length, double TopSpeedPct, double HighHandlingPct, double MediumHandlingPct, double CruiseSpeedPct) {
    this->trackName = Name;
    this->length = Length;
    this->topSpeedPct = TopSpeedPct;
    this->highHandlingPct = HighHandlingPct;
    this->mediumHandlingPct = MediumHandlingPct;
    this->cruiseSpeedPct = CruiseSpeedPct;

    double sumOfAttributes = TopSpeedPct + HighHandlingPct + MediumHandlingPct + CruiseSpeedPct;
    if(abs(sumOfAttributes - 1.0) > 0.0001) {
        throw invalid_argument("Percentage values must add up to 1.0");
    }

}

string Track::getTrackName() {
    return trackName;
}
int Track::getLength() {
    return length;
}
double Track::getTopSpeedPct() {
    return topSpeedPct;
}
double Track::getHighHandlingPct() {
    return highHandlingPct;
}
double Track::getMediumHandlingPct() {
    return mediumHandlingPct;
}
double Track::getCruiseSpeedPct() {
    return cruiseSpeedPct;
}

void Track::display() {
    cout << "Race Track: " << getTrackName() << endl;
    cout << "Total Length: " << getLength() << " kms" << endl;
    cout << "Top Speed Distance: " << getLength() * getTopSpeedPct() << " kms" << endl;
    cout << "High Speed Distance: " << getLength() * getHighHandlingPct() << " kms" << endl;
    cout << "Medium Speed Distance: " << getLength() * getMediumHandlingPct() << " kms" << endl;
    cout << "Cruise Speed Distance: " << getLength() * getCruiseSpeedPct() << " kms" << endl << endl;
}
