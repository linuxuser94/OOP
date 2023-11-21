// 14. Napisati program koji će pretvarati unesenu vrijednost u konvertibilnim markama (KM) u kune (kn) i eure (€). 
// Odnos 1 KM = 3,8049kn, te 1KM = 0.5049€

#include <iostream>
using namespace std;

int main(){

    float marka;

    cout << "Unesi vrijednost u konvertibilnim markama (KM): ";
    cin >> marka;
    float kuna = marka * 3.8049;
    float euro = marka * 0.5049;

    cout << "--------------------------------------------------" << endl;
    cout << "Vrijednost " << marka << " KM u kunama (KN) je = " << kuna << " KN." << endl;
    cout << "Vrijednost " << marka << " KM u eurima (EUR) je = " << euro << " EUR." << endl << endl;


    return 0;
}