#include <iostream>
#include <conio.h>
#include "klasy.h"

using namespace std;

int main()
{
	cout << "Autorzy: Slawomir Sukiennik, Jakub Platek" << endl << endl << endl;
	cout << "Witaj w programie realizujacym podstawowe operacje na tablicy rozmiaru n x m." << endl;
	
	Tablica_dwu *ob1 = new Tablica_dwu; // tworzenie obiektu ob1 o klasie Tablica_dwu
	
	//ob1->stworz();
	ob1->wypelnij();
	ob1->wyswietl();
	ob1->max();
	delete ob1;
	
	
	return 0;
}
