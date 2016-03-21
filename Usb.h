#pragma once
#include <iostream>
#include <string>

using namespace std;

class USB {
private:
	double technologia_usb;
public:
	USB();
	USB(double technologia_usb);
	~USB();
	void wyswietlParametryUSB();
	void zmienTechnologieUSB(double technologia_usb);
};