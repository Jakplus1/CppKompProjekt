#include <iostream>
#include <string>
#include "procesor.h"

using namespace std;

Procesor::Procesor()
{
#ifdef _DEBUG
	cout << "Wywolano konstruktor Procesor" << endl;
#endif
	producent = "Intel";
	linia_procesora = "Pentium G";
	ilosc_rdzeni = 2;
	ilosc_watkow = 2 * ilosc_rdzeni;
	ilu_bitowy = 64;
	odblokowany_mnoznik = false;
	taktowanie_rdzenia = 3200;
	tdp = 85;
}

void Procesor::wyswietlParametryProcesora()
{
	cout << "Pelna nazwa procesora: " << producent + string(" ") + linia_procesora << endl;
	cout << "Producent: " << producent << endl;
	cout << "Linia procesora: " << linia_procesora << endl;
	cout << "Ilosc rdzeni: " << ilosc_rdzeni << endl;
	cout << "Ilosc watkow: " << ilosc_watkow << endl;
	cout << "Procesor " << ilu_bitowy << " bitowy" << endl;
	if (odblokowany_mnoznik == true)
		cout << "Odblokowany mnoznik: TAK" << endl;
	else
		cout << "Odblokowany mnoznik: NIE" << endl;
	cout << "Taktowanie rdzenia: " << taktowanie_rdzenia << endl;
	cout << "Pobor energii: " << tdp << endl;
}

void Procesor::zmienMnoznik(bool mnoznik)
{
	odblokowany_mnoznik = mnoznik;
}

void Procesor::zmienProcesor(string linia_procesora, string producent)
{
	this->linia_procesora = linia_procesora;
	this->producent = producent;
}

Procesor::~Procesor()
{
#ifdef _DEBUG
	cout << "Wywolano destruktor Procesor" << endl;
#endif
}