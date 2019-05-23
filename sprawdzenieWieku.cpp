#include <iostream>
using namespace std;

int main()
{
    int wiek;

    cout << "Podaj wiek: ";
    cin >> wiek;
    
    if (wiek < 18) {
        cout << "Nie jestes pelnoletni i nie mozesz zostac prezydentem";
    } else if ( (wiek <= 18) && (wiek < 35) ){
        cout << "Jesteś pełnoletni i nie mozesz zostac prezydentem";
    } else {
        cout << "Jestes pelnoletni i mozesz zostac prezydentem";
    }
    return 0;
}