#pragma once
#include "Component.h"
#include <string>

class HomeTheaterFacade
{
public:
	HomeTheaterFacade(Amplifier* amp,
		Tuner* tuner,
		DvdPlayer* dvd,
		CdPlayer* cd,
		Projector* projector,
		ThreaterLights* lights,
		Screen* screen,
		PopcornPopper* popper);

	void watchMovie(std::string movie);
	void endMovie();

private:
	Amplifier* amp;
	Tuner* tuner;
	DvdPlayer* dvd;
	CdPlayer* cd;
	Projector* projector;
	ThreaterLights* lights;
	Screen* screen;
	PopcornPopper* popper;
};

