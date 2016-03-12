#pragma once
#include <iostream>
#include <string>

using namespace std;

class Procesor {
private:
	string linia_procesora;
	string producent;
	int taktowanie_rdzenia;
	int ilosc_rdzeni;
	int ilosc_watkow;
	int ilu_bitowy;
	int tdp; // pobor energii procesora
	bool odblokowany_mnoznik;
public:
	Procesor();
	~Procesor();
	void wyswietlParametryProcesora();
	void zmienMnoznik(bool mnoznik);
	void zmienProcesor(string linia_procesora, string producent);
};