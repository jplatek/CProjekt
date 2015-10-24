#include <iostream>

using namespace std;

class Tablica_dwu;
class Operacja;

class Tablica_dwu
{
		
		int x;
		int y;
		int nowy_x;
		int nowy_y;
		int ** tablica;
		
	public:	
		Tablica_dwu();
		~Tablica_dwu();
		void wypelnij();
		void wyswietl();
		void zmien_rozmiar();		
		void dodaj_do_pliku();
		void odczytaj_z_pliku();
		

		int wybor;
		void suma();
		void srednia();
		void max();
		void min();
		void odchylenie();
		
};

