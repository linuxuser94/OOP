// 6. Napisati program koji će tražiti unos dva broja, a ispisati prosjek/aritmetičku sredinu unesenih brojeva.

#include <iostream>
using namespace std;

int main(){

    int br1, br2;
    cout << "Unesi dva broja: ";
    cin >> br1 >> br2;

    cout << "Aritmeticka sredina " << br1 << " i " << br2 << " je " << (br1+br2)/2 << "." << endl;


    return 0;
}