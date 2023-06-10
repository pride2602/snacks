// Snacks.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include <iostream>

#include "Snack.h"

using namespace std;

Snack::Snack(std::string snackName, short snackCalories, double snackPrice)
{
	snackName = snackName;
	snackCalories = snackCalories;
	snackPrice = snackPrice;
}

Snack::Snack(std::string snackName)
{
	snackName = snackName;
}

Snack::Snack()
{
}

Snack::~Snack()
{
}

std::string Snack::getSnackName() const
{
	return snackName;
}

void Snack::setSnackName(std::string value)
{
	snackName = value;
}

short Snack::getSnackCalories() const
{
	return snackCalories;
}

void Snack::setSnackCalories(short value)
{
	snackCalories = value;
}

double Snack::getSnackPrice() const
{
	return snackPrice;
}

void Snack::setSnackPrice(double value)
{
	snackPrice = value;
}

SnackSlot::SnackSlot(int slotSize)
{
	slotSize = slotSize;
	snackCount = 0;
	snacks = new Snack * [slotSize];
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
VendingMachine::VendingMachine(int SC)
{
	slotCount = SC;
	FreeSlots = SC;
}
void VendingMachine::addSlot(SnackSlot* slot)
{
	--FreeSlots;
}
int VendingMachine::getEmptySlotsCount()
{
	return FreeSlots;
}


// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
