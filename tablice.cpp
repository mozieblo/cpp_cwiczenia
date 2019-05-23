#include <iostream>
#include <cstdlib>
#include <time.h>
#include <unistd.h>
#include <curses.h>

using namespace std;


int main()
{
    float oceny[5], suma = 0, srednia;

    for (int i = 0; i < 5 ; i++)
    {
        cout << "Podaj "<< i+1 << " ocenę" << endl;
        cin >> oceny[i];
        suma += oceny[i];
    }
        srednia = suma/5;
        cout << "Twoja srednia wynosi " << srednia << endl;

    return 0;
}