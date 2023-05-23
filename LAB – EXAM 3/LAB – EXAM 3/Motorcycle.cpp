#include "Motorcycle.h"

double Motorcycle::race(Track track) {

	double lapTime = 0.0;
	
	lapTime += (track.getLength() * track.getTopSpeedPct()) / (topSpeed);

	if (handling >= 0.8) {
		lapTime += (track.getLength() * track.getHighHandlingPct()) / (topSpeed * aerodynamics);
	}
	else {
		lapTime += (track.getLength() * track.getHighHandlingPct()) / ((topSpeed * 0.8) * aerodynamics);
	}
	
	if (handling >= 0.6) {
		lapTime += (track.getLength() * track.getMediumHandlingPct()) / (topSpeed * aerodynamics);
	}
	else {
		lapTime += (track.getLength() * track.getMediumHandlingPct()) / ((topSpeed * 0.9) * aerodynamics);
	}
	
	lapTime += (track.getLength() * track.getCruiseSpeedPct()) / (topSpeed / 2);

	lapTime *= 60;
	
	return lapTime;
}