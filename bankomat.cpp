#include <iostream>
using namespace std;

int main()
{
    string PIN;

    cout << "Podaj numer PIN: ";
    cin >> PIN;

    if (PIN == "5555"){
        cout << "Poprawny PIN";
    } else {
        cout << "Niepoprawny PIN";
    }
    return 0;
}