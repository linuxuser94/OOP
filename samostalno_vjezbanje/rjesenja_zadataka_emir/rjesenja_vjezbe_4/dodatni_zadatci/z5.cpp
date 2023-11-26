// 5. Napiši program koji će tražiti unos ograničenja ispisa niza, 
// a potom zbrojiti od-do ograničenja sve brojeve i ispisati njihovu sumu.

#include <iostream>
using namespace std;

int main(){


    int broj_OD, broj_DO, zbir;
    cout << "Unesi broj od kojeg ce poceti ispis niza: ";
    cin >> broj_OD;

    cout << "Unesi broj s kojim ce zavrsiti ispis niza: ";
    cin >> broj_DO;

    zbir = 0;

    for (int i = broj_OD; i <= broj_DO; i++){
        cout << i << endl;
        zbir = zbir + i;
    }

    cout << "Suma svih brojeva od " << broj_OD << " do " << broj_DO << " je = " << zbir << "." << endl;

    return 0;
}