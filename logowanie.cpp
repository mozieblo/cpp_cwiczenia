#include <iostream>
using namespace std;

int main()
{
    string login, haslo;

    cout << "Podaj login: ";
    cin >> login;
    cout << "Podaj haslo: ";
    cin >> haslo;

    if ( (login == "ciapek") && (haslo == "ciapkowa") )
    {
        cout << "Zalogowales sie";
    } else 
    {
        cout << "niepoprawne dane";
    }
    
    return 0;
}