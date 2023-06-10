#pragma once

class Snack
{
private:
	std::string snackName;
	short snackCalories;
	double snackPrice;
public:

	Snack(std::string snackName, short snackCalories, double snackPrice);
	Snack(std::string snackName);
	Snack();
	~Snack();

	std::string getSnackName() const;
	void setSnackName(std::string value);

	short getSnackCalories() const;
	void setSnackCalories(short value);

	double getSnackPrice() const;
	void setSnackPrice(double value);
};

class SnackSlot
{
private:
	int slotSize;
	short snackCount;
	Snack** snacks;
public:
	SnackSlot(int Slotsize);
	~SnackSlot();

	int getSlotSize() const;
	void setSlotSize(int value);
	void addSnack(Snack* snack);
	std::string getSnackName() const;
};
class  VendingMachine
{
public:
	VendingMachine(int SC);
	void addSlot(SnackSlot* slot);
	int getEmptySlotsCount();
private:
	int slotCount;
	int FreeSlots;
};