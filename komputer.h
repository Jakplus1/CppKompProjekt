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
	int test_operatora[10];
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
	void dodajUsb(int liczba_usb);
	void wyswietlUsb();
	static int wyswietLiczbeObiektow() { return liczba_obiektow; };

	friend ostream& operator<< (ostream &s, Komputer &k);
	bool operator < (const Komputer &komputer);
	bool operator > (const Komputer &komputer);
	bool operator == (const Komputer &komputer);
	int &operator [] (int i);
	operator double() const;
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
