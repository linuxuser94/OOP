// 7. Napiši program koji  će tražiti unos ograničenja ispisa niza, 
// a potom zbrojiti od-do ograničenja sve 
// brojeve i ispisati njihovu sumu.

#include <iostream>
using namespace std;

int main(){

    int broj_OD, broj_DO, suma;
    suma = 0;
    cout << "Unesi broj od kojeg ce raspon poceti: ";
    cin >> broj_OD;
    cout << "Unesi broj sa kojim ce raspon zavrsiti ispis: ";
    cin >> broj_DO;

    for (int i = broj_OD; i <= broj_DO; i++){
        suma = suma + i;
    }

    cout << suma;

    return 0;
}