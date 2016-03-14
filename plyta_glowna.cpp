#include <iostream>
#include <string>
#include "plyta_glowna.h"

using namespace std;

Plyta_glowna::Plyta_glowna()
{
#ifdef _DEBUG
	cout << "Wywolano konstruktor Plyta_glowna" << endl;
#endif
	cena = 0;
	producent = "producent_domyslny";
	model = "model_domyslny";
	wersja_bios = "1.0";
	karta_sieciowa = "domyslna_karta_sieciowa";
	zintegrowana_karta_graficzna = "domyslna_zintegrowana_karta_graficzna";
}

Plyta_glowna::~Plyta_glowna()
{
#ifdef _DEBUG
	cout << "Wywolano destruktor Plyta_glowna" << endl;
	cout << "----------------------------------" << endl;
#endif
}

void Plyta_glowna::zmienCene(double nowa_cena)
{
	cena = nowa_cena;
}
void Plyta_glowna::wyswietlParametry_PlytaGlowna()
{
	cout << "Cena: " << cena << endl;
	cout << "Karta sieciowa: " << karta_sieciowa << endl;
	cout << "Producent: " << producent << endl;
	cout << "Model: " << model << endl;
	cout << "Wersja biosu: " << wersja_bios << endl;
	cout << "Karta sieciowa: " << karta_sieciowa << endl;
	cout << "Zintegrowana karta graficzna: " << zintegrowana_karta_graficzna << endl;
}
void Plyta_glowna::pelnaNazwa()
{
	cout << "Pelna nazwa urzadzenia: " << producent + string(" ") + model << endl;
}