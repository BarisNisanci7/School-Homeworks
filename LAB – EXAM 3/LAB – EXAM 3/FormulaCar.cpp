#include "FormulaCar.h"

double FormulaCar::race(Track track) {

	double lapTime = 0.0;
	
	lapTime += (track.getLength() * track.getTopSpeedPct()) / (topSpeed * aerodynamics);
	
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

	lapTime += (track.getLength() * track.getCruiseSpeedPct()) / ( (topSpeed / 2) * aerodynamics);

	lapTime *= 60;

	return lapTime;
}