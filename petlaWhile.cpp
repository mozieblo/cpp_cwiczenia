// jak dziala petla while
#include <iostream>
using namespace std;

int main()
{
    int ile;

    cout << "Ile gwizdek ma miec kapitan?: ";
    cin >> ile;
    cout << "\n No to narysujemy wszystkie " << ile << ":";

    // pętla while rysująca gwiazdki
    while(ile)
    {
        cout << "*";
        ile = ile -1;
    }
    // dowod ze mozna przerwac petle
    cout << "\n Teraz zmienna ile ma wartosc " << ile;
}