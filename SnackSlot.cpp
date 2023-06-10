#include <iostream>
#include "SnackSlot.h"
using namespace std;

SnackSlot::SnackSlot(int slotSize)
{
	this->slotSize = slotSize;
	this->snackCount = 0;
	this->snacks = new Snack * [slotSize];
}

SnackSlot::~SnackSlot()
{
	delete[] snacks;
}

int SnackSlot::getSlotSize() const
{
	return slotSize;
}

void SnackSlot::setSlotSize(int value)
{
	slotSize = value;
}

void SnackSlot::addSnack(Snack* snack)
{
	if (snackCount < slotSize)
	{
		snacks[snackCount] = snack;
		++snackCount;
	}
}
