#include <iostream>
#include "HomeTheaterFacade.h"
using namespace std;

int main()
{
	Amplifier* amp = new Amplifier;
	Tuner* tuner = new Tuner;
	DvdPlayer* dvd = new DvdPlayer;
	CdPlayer* cd = new CdPlayer;
	Projector* projector = new Projector;
	ThreaterLights* lights = new ThreaterLights;
	Screen* screen = new Screen;
	PopcornPopper* popper = new PopcornPopper;


	HomeTheaterFacade* facade = new HomeTheaterFacade(amp, tuner, dvd, cd, projector, lights, screen, popper);
	facade->watchMovie("aaa");
	facade->endMovie();
	return 0;
}