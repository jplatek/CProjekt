#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <sstream>
#include <math.h> // dla odchylenia standardowego
#include "klasy.h" // plik klasy

using namespace std;

 Tablica_dwu::Tablica_dwu()  // konstruktor tworzenia dynamicznej tablicy m x n
{
	
	do
    {
    	if (cin.fail()) // sprawdzenie czy wystapil blad cin
		{
			cin.clear(); // oczyszczenie bufora pamieci
			cin.ignore(1000, '\n');
		}
    	
	cout << "Podaj rozmiar wierszy - liczba naturalna od 1 do n" << endl;
	cin >> x;
	} while ( cin.fail() || x <= 0);
	
	
	do
    {
    	if (cin.fail()) 
		{
			cin.clear(); 
			cin.ignore(1000, '\n');
		}
    	
	cout << "Podaj rozmiar kolumn - liczba naturalna od 1 do n" << endl;
	cin >> y;
	} while ( cin.fail() || y <= 0);
	
	
	tablica = new int *[x];
	  
	for(int w = 0; w < x; w++)
    	tablica[w] = new int[y];  
}


Tablica_dwu::~Tablica_dwu()  // destruktor usuwania dynamicznej tablicy m x n
{

  for(int w=0; w<x; w++)
    delete tablica[w];
    
  delete tablica;
}


void Tablica_dwu::wypelnij()
{
	system ("cls");
	cout << "Poprosiles/as o stworzenie tablicy o ilosci wierszy: " << x << " oraz kolumn: " << y << endl;
	cout << "Prosze, wypelnij ja teraz" << endl;
	
	for(int i = 0; i < x ; i++)
	{
    	for(int j = 0; j < y; j++)
    	{	
    			do
    			{
    				if (cin.fail()) 
					{
						cin.clear(); 
						cin.ignore(1000, '\n');
					}
				cout << "Podaj element o pozycji ["<< i + 1 << "][" << j + 1 << "]" << endl;
				cin >> tablica[i][j];
				} while ( cin.fail());
    		
		}
		cout << endl;
	}
	 cout << endl;
}

void Tablica_dwu::wyswietl()
{
	system ("cls");
	cout << "Twoja tablica wyglada tak: " << endl;
	
  	for(int w = 0; w < x; w++)
  	{
   		for(int k = 0; k < y; k++)
    	{
      		cout << tablica[w][k] << " ";
		}
		
		cout << endl;
	}
	cout << endl;
}

void Tablica_dwu::zmien_rozmiar()
{
	cout << "Poprosiles/as o zmiane rozmiaru tablicy o ilosci wierszy: " << x << " oraz kolumn: " << y << endl;
	
		
	do
    {
    	if (cin.fail()) // sprawdzenie czy wystapil blad cin
		{
			cin.clear(); // oczyszczenie bufora pamieci
			cin.ignore(1000, '\n');
		}
    	
	cout << "Podaj prosze nowy rozmiar wierszy - liczba naturalna od 1 do n" << endl;
	cin >> nowy_x;
	} while ( cin.fail() || nowy_x <= 0);
	
	do
    {
    	if (cin.fail()) // sprawdzenie czy wystapil blad cin
		{
			cin.clear(); // oczyszczenie bufora pamieci
			cin.ignore(1000, '\n');
		}
    	
	cout << "Podaj prosze nowa liczbe kolumn - liczba naturalna od 1 do n" << endl;
	cin >> nowy_y;
	} while ( cin.fail() || nowy_y <= 0);
	
	
	int *temp1; // nowe wiersze
	int *temp2; // nowe kolumny
	
	cout << endl;
	
}


void Tablica_dwu::suma()
{
	int wybor = 0;
	do
    {
    	if (cin.fail()) // sprawdzenie czy wystapil blad cin
		{
			cin.clear(); // oczyszczenie bufora pamieci
			cin.ignore(1000, '\n');
		}
    	
	cout << "Co chcesz zsumowac?" << endl;
	cout << "1 - Wiersze" << endl;
	cout << "2 - Kolumny" << endl;
	cout << "3 - Wszystko" << endl;
	
	cin >> wybor;
	} while (wybor < 1 || wybor > 3 || cin.fail());
	


	 
	int suma_temp = 0;
	
	if ( wybor == 1 )
	{
		
		for(int w = 0; w < x; w++)
  		{
   			for(int k = 0; k < y; k++)
    		{
      			suma_temp = suma_temp + tablica[w][k];
			}
				cout << "Suma wiersza nr " << w + 1 << " wynosi " << suma_temp;
				suma_temp = 0;
				cout << endl;
		}
		suma_temp = 0;
	}	
	
	else if ( wybor == 2 )
	{
		
		for(int w = 0; w < y; w++)
  		{
   			for(int k = 0; k < x; k++)
    		{
      			suma_temp = suma_temp + tablica[k][w];
			}
				cout << "Suma kolumny nr " << w + 1 << " wynosi " << suma_temp;
				suma_temp = 0;
				cout << endl;
		}
		suma_temp = 0;
	}
		
	else if (wybor == 3 )
	{
		for(int w = 0; w < x; w++)
  		{
   			for(int k = 0; k < y; k++)
    		{
      			suma_temp = suma_temp + tablica[w][k];
			}
		}
		
		cout << "Suma wszystkich liczb Twojej tablicy wynosi " << suma_temp;
	
		suma_temp = 0;
	}	
}

void Tablica_dwu::srednia()
{
	int wybor = 0;
	do
    {
    	if (cin.fail()) // sprawdzenie czy wystapil blad cin
		{
			cin.clear(); // oczyszczenie bufora pamieci
			cin.ignore(1000, '\n');
		}
    	
	cout << "Co chcesz zsumowac?" << endl;
	cout << "1 - Wiersze" << endl;
	cout << "2 - Kolumny" << endl;
	cout << "3 - Wszystko" << endl;
	
	cin >> wybor;
	} while (wybor < 1 || wybor > 3 || cin.fail());
		
	float suma_temp = 0;
	
	if ( wybor == 1 )
	{
		
		for(int w = 0; w < x; w++)
  		{
   			for(int k = 0; k < y; k++)
    		{
      			suma_temp = suma_temp + tablica[w][k];
			}
				cout << "Srednia wiersza nr " << w + 1 << " wynosi " << suma_temp / y;
				suma_temp = 0;
				cout << endl;
		}
		suma_temp = 0;
	}
	
	if ( wybor == 2 )
	{
		
		for(int w = 0; w < y; w++)
  		{
   			for(int k = 0; k < x; k++)
    		{
      			suma_temp = suma_temp + tablica[k][w];
			}
				cout << "Srednia kolumny nr " << w + 1 << " wynosi " << suma_temp / x;
				suma_temp = 0;
				cout << endl;
		}
		suma_temp = 0;
	}
	
	
	if ( wybor == 3 )
	{
		for(int w = 0; w < x; w++)
  		{
   			for(int k = 0; k < y; k++)
    		{
      			suma_temp = suma_temp + tablica[w][k];
			}
		}
		
		cout << "Srednia wszystkich liczb Twojej tablicy wynosi " << suma_temp / (x * y);
	
		suma_temp = 0;
	}
}

void Tablica_dwu::max()
{
	int wybor = 0;
	do
    {
    	if (cin.fail()) // sprawdzenie czy wystapil blad cin
		{
			cin.clear(); // oczyszczenie bufora pamieci
			cin.ignore(1000, '\n');
		}
    	
	cout << "Co chcesz zsumowac?" << endl;
	cout << "1 - Wiersze" << endl;
	cout << "2 - Kolumny" << endl;
	cout << "3 - Wszystko" << endl;
	
	cin >> wybor;
	} while (wybor < 1 || wybor > 3 || cin.fail());
		
	int max_temp = 0;
	
	if ( wybor == 1 )
	{
		
		for(int w = 0; w < x; w++)
  		{
   			for(int k = 0; k < y; k++)
    		{
    			if (tablica[w][k] > max_temp)
      				max_temp = tablica[w][k];
			}
				cout << "Najwieksza liczba z wiersza " << w + 1 << " to liczba " << max_temp ;
				max_temp = 0;
				cout << endl;
		}
		max_temp = 0;
	}

	if ( wybor == 2 )
	{
		
		for(int w = 0; w < y; w++)
  		{
   			for(int k = 0; k < x; k++)
    		{
    			if (tablica[k][w] > max_temp)
      				max_temp = tablica[k][w];
			}
				cout << "Najwieksza liczba z kolumny " << w + 1 << " to liczba " << max_temp ;
				max_temp = 0;
				cout << endl;
		}
		max_temp = 0;
	}
	
		if ( wybor == 3 )
	{
		for(int w = 0; w < x; w++)
  		{
   			for(int k = 0; k < y; k++)
    		{
      			if (tablica[w][k] > max_temp)
      				max_temp = tablica[w][k];
			}
		}
		
		cout << "Najwiekszy element z tablicy to liczba " << max_temp ;
	
		max_temp = 0;
	}
	
}


void Tablica_dwu::min()
{
	int wybor = 0;
	do
    {
    	if (cin.fail()) // sprawdzenie czy wystapil blad cin
		{
			cin.clear(); // oczyszczenie bufora pamieci
			cin.ignore(1000, '\n');
		}
    	
	cout << "Co chcesz zsumowac?" << endl;
	cout << "1 - Wiersze" << endl;
	cout << "2 - Kolumny" << endl;
	cout << "3 - Wszystko" << endl;
	
	cin >> wybor;
	} while (wybor < 1 || wybor > 3 || cin.fail());
	
	int min_temp = tablica[0][0];
	
	if ( wybor == 1 )
	{
		
		for(int w = 0; w < x; w++)
  		{
   			for(int k = 0; k < y; k++)
    		{
    			if (min_temp > tablica[w][k])
      				min_temp = tablica[w][k];
			}
				cout << "Najmniejsza liczba z wiersza " << w + 1 << " to liczba " << min_temp ;
				min_temp = tablica[w][0];
				cout << endl;
		}
		min_temp = tablica[0][0];
	}
	
	if ( wybor == 2 )
	{
		
		for(int w = 0; w < y; w++)
  		{
   			for(int k = 0; k < x; k++)
    		{
    			if (min_temp > tablica[k][w])
      				min_temp = tablica[k][w];
			}
				cout << "Najmniejsza liczba z kolumny " << w + 1 << " to liczba " << min_temp ;
				min_temp = tablica[0][w];
				cout << endl;
		}
		min_temp = tablica[0][0];
	}
	
		if ( wybor == 3 )
	{
		for(int w = 0; w < x; w++)
  		{
   			for(int k = 0; k < y; k++)
    		{
    			if (min_temp > tablica[w][k])
      				min_temp = tablica[w][k];
			}
		}
		
		cout << "Najmniejszy element z tablicy to liczba " << min_temp ;
	
		min_temp = tablica[0][0];
	}
	
}

void Tablica_dwu::odchylenie()
{
	int wybor = 0;
	do
    {
    	if (cin.fail()) // sprawdzenie czy wystapil blad cin
		{
			cin.clear(); // oczyszczenie bufora pamieci
			cin.ignore(1000, '\n');
		}
    	
	cout << "Co chcesz zsumowac?" << endl;
	cout << "1 - Wiersze" << endl;
	cout << "2 - Kolumny" << endl;
	cout << "3 - Wszystko" << endl;
	
	cin >> wybor;
	} while (wybor < 1 || wybor > 3 || cin.fail());
	
	float srednia_temp2 = 0;
	float *tablica_helpdesk;
	
	tablica_helpdesk = new float[x];
	
	if ( wybor == 1 )
	{	
		for(int w = 0; w < x; w++)
  		{
   			for(int k = 0; k < y; k++)
    		{
      			srednia_temp2 = srednia_temp2 + tablica[w][k];
			}
			tablica_helpdesk[w] = srednia_temp2 / y;
			srednia_temp2 = 0;
		}
		srednia_temp2 = 0;
	
	
	float odchylenie_temp = 0;
	
		for(int w = 0; w < x; w++)
  		{
   			for(int k = 0; k < y; k++)
    		{
      			odchylenie_temp = odchylenie_temp + pow((tablica[w][k] - tablica_helpdesk[w]),2);
      			
			}
				odchylenie_temp = odchylenie_temp / y;
				odchylenie_temp = sqrt(odchylenie_temp);
				
				cout << "Odchylenie standardowe wiersza numer " << w + 1 << " to liczba " << odchylenie_temp ;
				odchylenie_temp = 0;
				cout << endl;
		}
	 odchylenie_temp = 0;
	 delete[] tablica_helpdesk;	 
	}
	
	float odchylenie_temp = 0;
	float *tablica_helpdesk2;
	
	tablica_helpdesk2 = new float[y];
	
	 if ( wybor == 2 )	 	 
	{
		
		for(int w = 0; w < y; w++)
  		{
   			for(int k = 0; k < x; k++)
    		{
      			srednia_temp2 = srednia_temp2 + tablica[k][w];
			}
			tablica_helpdesk2[w] = srednia_temp2 / x;
			srednia_temp2 = 0;
		}
		srednia_temp2 = 0;
		
		for(int w = 0; w < y; w++)
  		{
   			for(int k = 0; k < x; k++)
    		{
      			odchylenie_temp = odchylenie_temp + pow((tablica[k][w] - tablica_helpdesk[w]),2);
      	    }
				odchylenie_temp = odchylenie_temp / x;
				odchylenie_temp = sqrt(odchylenie_temp);
				
				cout << "Odchylenie standardowe kolumny numer" << w + 1 << " to liczba " << odchylenie_temp ;
				odchylenie_temp = 0;
				cout << endl;
		}
			odchylenie_temp = 0;
		    delete[] tablica_helpdesk2;	 
	}
	 
	float tablica_helpdesk3 = 0;
	odchylenie_temp = 0;
	 
	if ( wybor == 3 )
	{
		for(int w = 0; w < x; w++)
  		{
   			for(int k = 0; k < y; k++)
    		{
      			srednia_temp2 = srednia_temp2 + tablica[w][k];
			}
		}	
		tablica_helpdesk3 = srednia_temp2 / (x * y);
	
		for(int w = 0; w < x; w++)
  		{
   			for(int k = 0; k < y; k++)
    		{
      			odchylenie_temp = odchylenie_temp + pow((tablica[w][k] - tablica_helpdesk3),2);
			}
		}
	
			odchylenie_temp = odchylenie_temp / (x * y);
			odchylenie_temp = sqrt(odchylenie_temp);
			cout << "Odchylenie standardowe Wszystkich pozycji wynosi " << odchylenie_temp ;
			cout << endl;
	}
	 

}

void Tablica_dwu::odczytaj_z_pliku() //odczytanie pliku z macierz¹ i jej rozmiarem w celu modyfikacji rozmiaru 
{
	fstream plikout;
    plikout.open("wizytowka.txt", ios::in);
    
	if(plikout.good()==false) cout<<"Nie mozna otworzyc pliku!";
    
	else
	{
    	while(!plikout.eof())
    	{
	 		getline(plikout, linia);
	 		cout<<linia<<' '<<endl; 
		}
	
	}
	
	plikout.close();
    	
}

void Tablica_dwu::dodaj_do_pliku() //dodanie macierzy do pliku, w celu reu¿ycia do ewentualnej modyfikacji rozmiaru 
{
	fstream plikin;
    plikin.open("macierz.txt",ios::out);
    string linijkamacierzy,temp;
    plikin<<x<<endl;
    plikin<<y<<endl;
    for (int wr=0; wr<x;wr++)
    {
    	for (int kl=0; kl<x;kl++){
    		
    		plikin<<linijkamacierzy<<endl;
    		
		}	
	}
    

    plikin.close();
	
}

