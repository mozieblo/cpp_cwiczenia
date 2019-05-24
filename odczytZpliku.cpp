#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;



int main()
{
    string imie, nazwisko;
    int nr_tel;

    string linia;
    int nr_linii=1;

    fstream plik;
    plik.open("dane.txt", ios::in);

    if(plik.good()==false) 
    {
        cout<<"Nie mozna otworzyc pliku!";
        exit(0);
    }

    while (getline(plik, linia))
    {
        switch (nr_linii)
        {
            case 1: imie=linia; break;
            case 2: nazwisko=linia; break;
            case 3: nr_tel=atoi(linia.c_str()); break;
        }
        nr_linii++;
    }

    plik.close();

    cout<<"imie: "<<imie<<endl;
    cout<<"nazwisko: "<<nazwisko<<endl;
    cout<<"telefon: "<<nr_tel<<endl;

    return 0;
}