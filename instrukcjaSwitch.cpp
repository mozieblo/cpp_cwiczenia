#include <iostream>
using namespace std;

int main()
{
    cout << "Ktory podzespol sprawdzic? \n"
         << "nr 10 -Silnik \n nr 35 - Stery \n nr 28 -radar \n"
         << " Podaj numer: ";
    int ktory;
    cin >> ktory;

    switch(ktory)
    {
        case 10:
            cout << "sprawdzamy silnik \n";
            break;
        case 28:
            cout << "sprawdzamy radar \n";
            break;
        case 35:
            cout << "sprawdzamy stery \n";
            break;
        default:
            cout << "Zazadales nr " << ktory << " - nie znam takiego! ";
            break;
    }
}