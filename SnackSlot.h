#pragma once
#include "snack.h"

class Snackslot
{
private:
	int slotSize;
	short snackCount;
	Snack** snacks;
public:
	Snackslot(int Slotsize);
	~Snackslot();

	int getSlotSize() const;
	void setSlotSize(int value);
	void addsnack(Snack* snack);
	std::string getSnackName() const;
};