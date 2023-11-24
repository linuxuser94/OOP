// 5. Napiši program koji će tražiti unos ograničenja niza od – do , 
//kako bi program znao koje brojeve da 
// ispiše.

// Primjerice unesemo od 1 do 20, program će 
// ispisati sve brojeve od 1 do 20.

#include <iostream>
using namespace std;

int main(){

    int broj_OD, broj_DO;
    cout << "Unesi broj od kojeg ce raspon poceti: ";
    cin >> broj_OD;
    cout << "Unesi broj sa kojim ce raspon zavrsiti ispis: ";
    cin >> broj_DO;

    for (int i = broj_OD; i <= broj_DO; i++){
        cout << i << endl;
    }


    return 0;
}