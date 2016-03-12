#pragma once
#include <iostream>
#include <string>

using namespace std;

class USB {
private:
	string technologia_usb;
public:
	USB();
	USB(string technologia_usb);
	~USB();
	void wyswietlParametryUSB();
	void zmienTechnologieUSB(string technologia_usb);
};