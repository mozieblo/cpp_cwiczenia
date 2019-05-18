// działanie pętli do while
#include <iostream>
using namespace std;

int main()
{
    char litera;
    do {
        cout << "Napisz jakas litere: ";
        cin >> litera;
        cout << "\n Napisales: " << litera << "\n";
    } while(litera != 'M');

    cout << "\n Skoro napisales M to konczymy !";
}