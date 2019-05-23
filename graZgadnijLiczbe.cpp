#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;


int main()
{
    int liczba, strzal, ile_prob = 0;

    cout << "Witaj! Pomyslalem sobie liczbe od 1 do 100" << "\n";
    srand(time(NULL));
    liczba = rand()%100+1;
    
    

    while(strzal != liczba)
    {
        ile_prob++;
        cout << "Zgdanij jaka? " << endl;
        cin >> strzal;
        if (strzal == liczba)
        cout << "Udalo sie! Wygrywasz! Zgadles w " << ile_prob << " probie " << endl;
        else if (strzal < liczba)
        cout << "To za mało. To Twoja " << ile_prob << " proba " << endl;
        else if (strzal > liczba)
        cout << "To za duzo. To Twoja " << ile_prob << " proba " << endl;
    }
    return 0;
}