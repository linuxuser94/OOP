// 8. Napisati program koji će tražiti da uneseš neki broj, 
// a potom će izračunati kvadrat tog broja i ispisati rezultat.

#include <iostream>
using namespace std;

int main(){

    int br1;
    cout << "Unesi broj za kvadriranje: ";
    cin >> br1;

    cout << "Kvadrat od " << br1 << " je " << br1*br1 << "." << endl;

    return 0;
}