#pragma once
#include "Duck.h"
#include "TurKey.h"

class TurkeyClassAdapter : public Duck, public TurKey
{
public:
	void quack() override {
		gobble();
	}

	void fly() override {
		TurKey::fly();
	}
};