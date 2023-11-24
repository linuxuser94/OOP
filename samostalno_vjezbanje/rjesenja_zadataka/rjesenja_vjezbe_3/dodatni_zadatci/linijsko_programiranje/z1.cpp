/*

1. Napiši program koji će tražiti unos nekog dvoznamenkastog broja, a potom će ispisati te znamenke unazad. 

Primjerice unos je 45, a ispis je 54.
Napomena:  Dvoznamenkasti broj = x*101 + y*100

Ostatak dijeljenja dvoznamenkastog broja sa 10 broj % 10 dobijamo jedinice broja (u ovom slučaju dvoznamenkastog). 
Cjelobrojnim dijeljenom sa 10 (broj / 10) dvoznamenkastog broja se dobija cifra desetica. 

*/

#include <iostream>
using namespace std;

int main(){
    
    
    int broj;
    cout << "Unesi dvocifreni broj: ";
    cin >> broj;

    cout << ((broj % 10) * 10) + (broj/10);
    
    
    return 0;}