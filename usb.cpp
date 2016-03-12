#include <iostream>
#include <string>
#include "usb.h"

using namespace std;

USB::USB()
{
#ifdef _DEBUG
	cout << "Wywolano konstruktor obiektu dynamicznego USB" << endl;
#endif
	technologia_usb = "2.0";
}
USB::USB(string technologia_usb)
{
	this->technologia_usb = technologia_usb;
}

void USB::wyswietlParametryUSB()
{
	cout << "Technologia USB: " << technologia_usb << endl;
}

void USB::zmienTechnologieUSB(string technologia_usb)
{
	this->technologia_usb = technologia_usb;
}

USB::~USB()
{
#ifdef _DEBUG
	cout << "Wywolano destruktor obiektu dynamicznego USB" << endl;
#endif
}