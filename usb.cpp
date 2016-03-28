#include <iostream>
#include <string>
#include "usb.h"

using namespace std;

USB::USB()
{
#ifdef _DEBUG
	cout << "Wywolano konstruktor obiektu dynamicznego USB" << endl;
#endif
	technologia_usb = 2.0;
}
USB::USB(double technologia_usb)
{
	this->technologia_usb = technologia_usb;
}

string USB::wyswietlParametryUSB()
{
	string s = to_string(technologia_usb);
	return "Technologia USB: " + s + "\n";
}

void USB::zmienTechnologieUSB(double technologia_usb)
{
	this->technologia_usb = technologia_usb;
}

USB::~USB()
{
#ifdef _DEBUG
	cout << "Wywolano destruktor obiektu dynamicznego USB" << endl;
#endif
}