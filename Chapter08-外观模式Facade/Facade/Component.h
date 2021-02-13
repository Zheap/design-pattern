#pragma once
// 这里定义家庭影院所需要的多种类

class Screen {
public: 
	void up();
	void down();
};

class PopcornPopper {
public:
	void on();
	void off();
	void pop();
};

class ThreaterLights {
public:
	void on();
	void off();
	void dim();
};

class Tuner;
class CdPlayer;
class DvdPlayer;

class Amplifier {
public:
	void on();
	void off();
	void setCd();
	void setDvd();
	void setStereoSoud();
	void setSurroundSoud();
	void setTuner();
	void setVolume();
	
private:
	Tuner* tuner;
	CdPlayer* cdPlayer;
	DvdPlayer* dvdPlayer;
};

class Tuner {
public:
	void on();
	void off();
	void setAm();
	void setFm();
	void setFrequency();

private:
	Amplifier* amplifer;
};

class CdPlayer {
public:
	void on();
	void off();
	void eject();
	void pause();
	void play();
	void stop();

private:
	Amplifier* amplifer;
};


class DvdPlayer {
public:
	void on();
	void off();
	void eject();
	void pause();
	void play();
	void setSurroundAudio();
	void setTwoChannelAudio();
	void stop();

private:
	Amplifier* amplifer;
};

class Projector {
public:
	void on();
	void off();
	void tvMode();
	void wideScreenMode();
private:
	DvdPlayer* dvdPlayer;
};