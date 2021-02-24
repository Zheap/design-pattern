#pragma once
#include "MenuItem.h"

class Iterator
{
public:
	virtual bool hasNext() { return false; }
	virtual MenuItem* next() { return nullptr; }
};