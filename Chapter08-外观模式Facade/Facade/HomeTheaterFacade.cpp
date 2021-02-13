#include "HomeTheaterFacade.h"

HomeTheaterFacade::HomeTheaterFacade(Amplifier* amp, Tuner* tuner, DvdPlayer* dvd, CdPlayer* cd, Projector* projector, ThreaterLights* lights, Screen* screen, PopcornPopper* popper)
{
	this->amp = amp;
	this->tuner = tuner;
	this->dvd = dvd;
	this->cd = cd;
	this->projector = projector;
	this->lights = lights;
	this->screen = screen;
	this->popper = popper;

}

void HomeTheaterFacade::watchMovie(std::string movie)
{
	popper->on();
	popper->pop();
	lights->dim();
	screen->down();
	projector->on();
	projector->wideScreenMode();
	amp->on();
	amp->setDvd();
	amp->setSurroundSoud();
	amp->setVolume();
	dvd->on();
	dvd->play();
}

void HomeTheaterFacade::endMovie()
{
	popper->off();
	lights->on();
	screen->up();
	projector->off();
	amp->off();
	dvd->stop();
	dvd->eject();
	dvd->off();
}