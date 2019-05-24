#include <iostream>
#include <cstdlib>
#include <time.h>
#include <unistd.h>
#include <curses.h>
#include <fstream>

using namespace std;


int main()
{
    string imie, nazwisko;
    int nr_telefonu;

    
        cout << "Podaj imie: " << endl; cin >> imie;
        cout << "Podaj imie nazwisko: " << endl; cin >> nazwisko;
        cout << "Podaj imie nr telefonu: " << endl; cin >> nr_telefonu;
       
    fstream plik;
    plik.open("dane.txt", ios::out | ios::app);

    plik << imie << endl;
    plik << nazwisko << endl;
    plik << nr_telefonu << endl;

    plik.close();
  
    return 0;
}