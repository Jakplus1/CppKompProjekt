#pragma once
#include <iostream>
#include <string>
#include "plyta_glowna.h"
#include "procesor.h"
#include "usb.h"

using namespace std;

class Komputer {
private:
	Plyta_glowna plyta_glowna;
	Procesor procesor;
	string typ_komputera;
	int rok_produkcji;
	int ilosc_ram;
	double wydajnosc;
	double cena;
	int liczba_usb;
	USB *usb;
public:
	static int liczba_obiektow;
	Komputer();
	Komputer(double wydajnosc);
	Komputer(int rok_produkcji, int ilosc_ram, int liczba_usb, double wydajnosc, double cena);
	~Komputer();
	Komputer(const Komputer& komputer);
	void zmienRam(int ram);
	void zmienRokProdukcji(int rok_produkcji);
	void zmienWydajnosc(double wydajnosc);
	void wyswietlWydajnosc();

	friend ostream& operator<< (ostream &s, Komputer &k);
	bool operator < (const Komputer &komputer);
	bool operator > (const Komputer &komputer);
	bool operator == (const Komputer &komputer);
	Komputer& operator = (const Komputer &komputer);	
	Komputer operator + (const Komputer &komputer);
	Komputer& operator += (const Komputer &komputer);
	Komputer operator * (const Komputer &komputer);
	Komputer& operator *= (const Komputer &komputer);
	Komputer& operator ++ (int);
	Komputer& operator -- (int);
	Komputer operator - (const Komputer &komputer);
	Komputer& operator -=(const Komputer &komputer);
};
