#pragma once
#include <iostream>
#include <string>

using namespace std;

class Plyta_glowna {
private:
	double cena;
	string producent;
	string model;
	string wersja_bios;
	string karta_sieciowa;
	string zintegrowana_karta_graficzna;
public:
	Plyta_glowna(); // konstruktor domyslny
	~Plyta_glowna(); // destruktor
	void zmienCene(double nowa_cena);
	void wyswietlParametry_PlytaGlowna();
	void pelnaNazwa();
};