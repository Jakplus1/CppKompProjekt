#include <iostream>
#include <string>
#include "komputer.h"
//#include "vld.h"

using namespace std;

string linia()
{
	return "---------------------------------- \n";
}

int main()
{
/*#ifdef _DEBUG
	cout << "Program w trybie DEBUG" << endl;
	cout << "Test konstruktorow komputera" << endl;
	cout << linia();
	Komputer test1;
	Komputer test2(3.43);
	Komputer test3(2015, 8192, 2, 5.66, 2149.99);
	cout << linia();
	cout << "Komputer test1: " << endl << test1 << linia();
	cout << "Komputer test2: " << endl << test2 << linia();
	cout << "Komputer test3: " << endl << test3 << linia();
	cin.get();
	system("cls");
	cout << "Test metod Komputera" << endl;
	cout << linia();
	Komputer test4;
	cout << linia();
	cout << "Oryginalny obiekt test4: " << endl << test4 << linia();
	test4.zmienRam(1024);
	cout << "Metoda zmienRam: " << endl << test4 << linia();
	test4.zmienRokProdukcji(2020);
	cout << "Metoda zmienRokProdukcji: " << endl << test4 << linia();
	test4.zmienWydajnosc(3.32);
	cout << "Metoda zmienWydajnosc: " << endl << test4 << linia();
	cout << "Metoda wyswietlWydajnosc: " << endl;
	test4.wyswietlWydajnosc();
	cin.get();
	system("cls");
	cout << "Test operatorow" << endl << linia() << endl;
	Komputer test5[2];
	cout << "Test operatora <<" << endl << linia();
	cout << test5[0] << linia();
	cout << "Test operatora <" << endl;
	test5[0].zmienWydajnosc(3.55);
	if (test5[0] < test5[1])
		cout << "Obiekt test5[0] jest mniejszy od obiektu test5[1]" << endl;
	else
		cout << "Obiekt test5[1] jest mniejszy od obiektu test5[1]" << endl;
	cout << linia() << "Test operatora >" << endl;
	if (test5[0] > test5[1])
		cout << "Obiekt test5[0] jest wiekszy od obiektu test5[1]" << endl;
	else
		cout << "Obiekt test5[0] jest mniejszy od obiektu test5[1]" << endl;
	cout << linia() << "Test operatora ==" << endl;
	if (test5[0] == test5[1])
		cout << "Obiekt test5[0] jest rowny test5[1]" << endl;
	else
		cout << "Obiekty test5[0] i test5[1] nie sa rowne" << endl;
	cout << linia() << "Test operatora = (test5[0]=test5[1])" << endl;
	test5[0].zmienRam(4500);
	test5[0] = test5[1];
	cout << "Obiekt test5[1]: " << endl << test5[1] << endl;
	cout << "Obiekt test5[0]: " << endl << test5[0];
	cin.get();
	system("cls");
	cout << "Test operatorow cd." << endl << linia();
	Komputer test6(6.54);
	Komputer test7(3.46);
	Komputer test8;
	cout << linia() << "Test operatora +" << endl;
	test8 = test6 + test7;
	cout << linia();
	cout << test8;
	cout << linia() << "Test operatora +=" << endl;
	test7 += test8;
	cout << test7;
	cout << linia() << "Test operatora *" << endl;
	test8 = test6 * test7;
	cout << test8;
	cout << linia() << "Test operatora *=" << endl << linia();
	Komputer test9[2];
	test9[0] *= test9[1];
	cout << linia();
	cout << test9[0];
	cin.get();
	system("cls");
	cout << linia() << "Test operatora -" << endl;
	Komputer test10[3];
	test10[0] = test10[1] - test10[2];
	cout << test10[0] << linia();
	cout << "Test operatora -=" << endl;
	Komputer test11[2];
	test11[0] -= test11[1];
	cout << linia() << test11[0] << linia();
	cout << "Test operatora ++ (obiekt test12 [wydajnosc domyslna == 5])" << endl;
	Komputer test12;
	test12++;
	cout << linia() << test12 << linia();
	cout << "Test operatora -- (dalej obiekt test12)" << endl;
	test12--;
	cout << test12 << linia();
	cin.get();
	system("cls");
	cout << linia() << endl << endl;
	cout << "Liczba stworzonych obiektow: " << Komputer::wyswietLiczbeObiektow() << endl << linia() << endl << endl;
#endif*/
	Komputer o1;
	o1.dodajUsb(5);
	o1.wyswietlUsb();
    return 0;
}

