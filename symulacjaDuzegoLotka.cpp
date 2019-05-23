#include <iostream>
#include <cstdlib>
#include <time.h>
#include <unistd.h>
#include <curses.h>

using namespace std;


int main()
{
    int liczba;

    cout << "Witaj w losowaniu! Za 3 sekundy nastąpi zwolnienie blokady!" << endl;
    sleep(3);
    srand(time(NULL));

    for(int i = 0; i < 6 ;i++)
    {
    sleep(1);
    cout << endl;
    liczba = rand()%49+1;
    cout << liczba << "\a" << endl;
    }
    
    
    

    return 0;
}