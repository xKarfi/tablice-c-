#include <iostream>
#include <cstdlib>
#include <ctime>
#include <fstream>
#include <cstdlib>
#include <conio.h>
using namespace std;

void zeruj(int t[], int rozmiar)
{
	for(int i=0; i<rozmiar; i++)
	{
		t[i]=0;
		cout<<t[i]<<",";
	}
};
void losuj(int t[], int rozmiar)
{	
	for (int i=0;i<rozmiar;i++)
	{
	
		t[i]=rand()%rozmiar;
		cout<<t[i]<<", ";
	}
};

void wypisz(int t[], int rozmiar)
{
	for(int i=0; i<rozmiar; i++)
	{
		cout<<t[i]<<",";
	}
};
void wprowadz(int t[], int rozmiar)
{
	for(int i=0; i<rozmiar; i++)
	{
		cin>>t[i];
	}	
};
	 	
void wypisz_z_pliku(int t[], int rozmiar)
{
	FILE *plik;
   char wczytaneZnaki[10];
   plik = fopen("plik.txt", "r"); 
   fgets(wczytaneZnaki, 10, plik);
   for(int i = 0;i<10;i++)
        cout << wczytaneZnaki[i];
   fclose(plik); 
};

		 
int main(int argc, char** argv) {
	int t[100];
	while(true)
	{
	
	int wybor;
	cout<<endl;
	  cout << "MENU GLOWNE" << endl;
    cout << "-----------------" << endl;
    cout << "1. Zeruj" << endl;
    cout << "2. Wprowadz" << endl;
    cout << "3. Wypisz" << endl;
    cout << "4. Losuj" << endl;
    cout << "5. Wczytaj z pliku" << endl;
    cout << "6. Koniec" << endl;
    cout<<"wybor: ";
    cin>>wybor;
    
    switch(wybor)
    {
    case 1:
            zeruj(t, 100);
    break;
    
    case 2:
            wprowadz(t, 2);
    break;
    
    case 3:
            wypisz(t, 10);
    break;
    
    case 4:
            losuj(t, 50);
    break;
    
    case 5:
            wypisz_z_pliku(t, 100);
    break;
    
    case 6:
            exit(0);
    break;
	}
}
	


	return 0;
}
