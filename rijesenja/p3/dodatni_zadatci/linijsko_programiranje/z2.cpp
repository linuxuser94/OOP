// Napiši program koji će tražiti unos nekog dvoznamenkastog broja, 
// a potom će ispisati zbroj unesenih znamenki dvoznamenkastog broja. 
// Primjerice unos je 45, a ispis je 9.


#include <iostream>
using namespace std;

int main(){

    int broj;
    cout << "Unesi dvocifreni broj: ";
    cin >> broj;

    cout << (broj % 10) + (broj / 10);


    return 0;
}