// 13. Napisati program koji će moći izračunati kvadratni korijen učitanog broja i ispisati kao novu varijablu. 
// Koristiti funkcije. (Obavezno učitati nenegatvni broj). 
// Funkcija sqrt(), korijen broja, nalazi se u biblioteci cmath i navodi sa u zaglavlju.

#include <iostream>
#include <cmath>
using namespace std;

int main(){

    float n;
    cout << "Unesi broj da se izvadi korijen tog broja: ";
    cin >> n;

    float korijen = sqrt(n);

    cout << "Korijen od " << n << " je = " << korijen << endl;

    return 0;
}