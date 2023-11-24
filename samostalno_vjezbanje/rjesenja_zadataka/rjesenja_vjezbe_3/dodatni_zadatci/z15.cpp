// 15. Ako smo u banci određenu svotu novca oročili na 5 godina 
// koliko ćemo novca nakon 5 godina podignuti ako je godišnja kamatna stopa 15% ? 

// Napiši program koji će izračunati iznos.


#include <iostream>
using namespace std;

int main(){

    float k_Stopa = 0.15;
    float t = 5;
    float novac, novac_Poslje;

    cout << "Unesite svotu novca koju ste oročili na 5 godina: ";
    cin >> novac;

    novac_Poslje = novac * (1 + k_Stopa * t);

    cout << "\nOročili ste " << novac << " KM na period od " << t << " godina." << endl;
    cout << "Nakon perioda od " << t << " godina " << "sa kamatnom stopom od " << 0.15 * 100 << "%"
         << " možete podići " << novac_Poslje << " KM." << endl << endl;

    return 0;
}