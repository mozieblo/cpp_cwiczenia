// program przeliczający cale na centymetry
#include <iostream>
using namespace std;

int main()
{
    int cale;       // przechowuje dane wejściowe
    double cm;      // do wpisania wyniku
    double przelicznik = 2.54;      // przelicznik cale na cm 1 cal = 2.54 cm

    cout << "Podaj cale: ";
    cin >> cale;                    // przyjęcie danej z klawiatury

    cm = cale * przelicznik;        // właściwe przeliczenie

    cout << "\n";                   // to samo co cout << endl;

    cout << cale << " cali - to jest: " << cm << " centymetrow\n";

    
}