// 14. Napiši program koji će tražiti unos ograničenja niza od – do, 
// kako bi program znao koje brojeve da 
// ispiše. 


// Primjerice unesemo od 15 do 20, program će ispisati sve brojeve od 15 do 20.

#include <iostream>
using namespace std;

int main(){

    int broj_OD, broj_DO;
    cout << "Unesi broj OD kojeg ce program brojat: ";
    cin >> broj_OD;
    cout << "Unesi broj DO kojeg ce program brojat: ";
    cin >> broj_DO;

    while (broj_OD <= broj_DO){
        cout << broj_OD++ << endl;
    }


    return 0;
}