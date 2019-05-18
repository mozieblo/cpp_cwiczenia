// zastosowanie instrukcji warunkowej if
#include <iostream>
using namespace std;

int main()
{
    int i;
    cout << "Podaj jakąś liczbę: ";
    cin >> i;
    if(i-4)
        cout << " zmienna i miala wartosc inna niz 4\n";
    else
        cout << " zmienna i miala wartosc rowna 4\n";

}