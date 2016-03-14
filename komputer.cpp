#include <iostream>
#include <string>
#include "komputer.h"

using namespace std;

int Komputer::liczba_obiektow = 0;

Komputer::Komputer()
{
#ifdef _DEBUG
	cout << "Wywolano konstruktor domyslny Komputer" << endl;
#endif
	liczba_usb = 2;
	usb = new USB[liczba_usb];
	rok_produkcji = 2000;
	ilosc_ram = 2048;
	wydajnosc = 5.0;
	liczba_obiektow++;
}

Komputer::Komputer(double wydajnosc)
{
#ifdef _DEBUG
	cout << "Wywolano konstruktor z parametrem Wydajnosc" << endl;
#endif
	rok_produkcji = 2000;
	ilosc_ram = 2048;
	liczba_usb = 2;
	usb = new USB[liczba_usb];
	this->wydajnosc = wydajnosc;
	liczba_obiektow++;
}

Komputer::Komputer(int rok_produkcji, int ilosc_ram, int liczba_usb, double wydajnosc, double cena)
{
#ifdef _DEBUG
	cout << "Wywolano konstruktor z parametrami: rok produkcji, ram, wydajnosc oraz cena" << endl;
#endif
	this->rok_produkcji = rok_produkcji;
	this->ilosc_ram = ilosc_ram;
	this->wydajnosc = wydajnosc;
	this->cena = cena;
	this->liczba_usb = liczba_usb;
	usb = new USB[liczba_usb];
	liczba_obiektow++;
}

Komputer::~Komputer()
{
#ifdef _DEBUG
	cout << "Wywolano destruktor Komputer" << endl;
#endif
	if (usb != NULL)
		delete []usb;
	liczba_obiektow--;
}

Komputer::Komputer(const Komputer& komputer)
{
	plyta_glowna = komputer.plyta_glowna;
	procesor = komputer.procesor;
	typ_komputera = komputer.typ_komputera;
	rok_produkcji = komputer.rok_produkcji;
	ilosc_ram = komputer.ilosc_ram;
	wydajnosc = komputer.wydajnosc;
	cena = komputer.cena;
	liczba_usb = komputer.liczba_usb;
	usb = new USB[liczba_usb];
	for (int i = 0; i < liczba_usb; i++)
		usb[i] = komputer.usb[i];
}

void Komputer::zmienRam(int ram)
{
	ilosc_ram = ram;
}

void Komputer::zmienRokProdukcji(int rok_produkcji)
{
	this->rok_produkcji = rok_produkcji;
}

void Komputer::zmienWydajnosc(double wydajnosc)
{
	this->wydajnosc = wydajnosc;
}

void Komputer::wyswietlWydajnosc()
{
	cout << "Wydajnosc komputera wynosi: " << wydajnosc << endl;
}

ostream& operator<< (ostream &s, Komputer &k)
{
	s << "Rok produkcji: " << k.rok_produkcji << endl << "Ilosc RAM: " << k.ilosc_ram << endl << "Wydajnosc: " << k.wydajnosc << endl << "Liczba USB: " << k.liczba_usb << endl;
	return s;
}

bool Komputer::operator< (const Komputer &komputer)
{
	if (wydajnosc < komputer.wydajnosc)
		return true;
	else
		return false;
}

bool Komputer::operator> (const Komputer &komputer)
{
	if (wydajnosc > komputer.wydajnosc)
		return true;
	else
		return false;
}

bool Komputer::operator== (const Komputer &komputer)
{
	if (wydajnosc == komputer.wydajnosc)
		return true;
	else
		return false;
}

Komputer& Komputer::operator = (const Komputer &komputer)
{
	typ_komputera = komputer.typ_komputera;
	rok_produkcji = komputer.rok_produkcji;
	ilosc_ram = komputer.ilosc_ram;
	wydajnosc = komputer.wydajnosc;
	cena = komputer.cena;
	return *this;
}

Komputer Komputer::operator + (const Komputer &komputer)
{
	Komputer suma(0);
	suma.wydajnosc = komputer.wydajnosc + wydajnosc;
	return suma;
}

Komputer& Komputer::operator += (const Komputer &komputer)
{
	wydajnosc += komputer.wydajnosc;
	return *this;
}

Komputer Komputer::operator * (const Komputer &komputer)
{
	Komputer mnozenie;
	mnozenie.wydajnosc = wydajnosc * komputer.wydajnosc;
	return mnozenie;
}

Komputer& Komputer::operator *= (const Komputer &komputer)
{
	wydajnosc *= komputer.wydajnosc;
	return *this;
}

Komputer& Komputer::operator ++ (int)
{
	wydajnosc++;
	return *this;
}

Komputer& Komputer::operator -- (int)
{
	wydajnosc--;
	return *this;
}

Komputer Komputer::operator - (const Komputer &komputer)
{
	Komputer odejmowanie;
	odejmowanie.wydajnosc = wydajnosc - komputer.wydajnosc;
	return *this;
}

Komputer& Komputer::operator -= (const Komputer &komputer)
{
	wydajnosc -= komputer.wydajnosc;
	return *this;
}                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                  