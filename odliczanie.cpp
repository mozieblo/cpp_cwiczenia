#include <iostream>
#include <unistd.h>
#include <cstdlib>
#include <curses.h>
using namespace std;


int main()
{
    for ( int i = 15 ; i >= 0 ; i-- )
    {
        sleep(1);      
        //system("clear"); nie działa na mac
        cout << i << "\n";
        
    }
    cout << "JEBUT";
    return 0;
}