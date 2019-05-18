// petla for przyklad
#include <iostream>
using namespace std;

int main ()
{
    cout << "Ile jedzie pasazerow? ";
    int ile;        // liczba pasazerow
    cin >> ile;
                    // licznik obiegow petli
    for(int i=0; i <= ile ; i = i +1)
    {
        cout << "Pasazer nr \n" << i << " prosze zapiac pasy! \n";
    }
    cout << "Skoro wszyscy zapieli, to jedziemy!";
}