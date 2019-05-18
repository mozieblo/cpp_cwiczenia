// Instrukcja Break
#include <iostream>
using namespace std;

/*int main()
{
    int i = 7;
    while(1)
    {
        cout << "Pętla, i = " << i << "\n";
        i = i -1;
        if(i < 5)
        {
            cout << "Przerywamy !\n";
            break;
        }
    }
}*/

int main()
{
    int i, m;
    int zakoncz = 3;
    for(i = 0 ; i < 4 ; i = i + 1)
    {
        for(m = 0 ; m < 10 ; m = m + 1)
        {
            cout << "*";
            if(m > zakoncz)break;    //tu wyskok z for (m...)
        }
        cout << "\nKontynuujemy zewnetrzna petle " << "for dla i = " << i << "\n";
    }
}