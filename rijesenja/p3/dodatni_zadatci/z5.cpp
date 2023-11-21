// 5. Isti zadatak kao prethodni ali za sve osnovne računske operacije.


#include <iostream>
using namespace std;

int main(){

    int br1, br2;
    cout << "Unesi dva broja: ";
    cin >> br1 >> br2;

    cout << "\nZbir " << br1 << " i " << br2 << " je " << br1 + br2 << "." << endl;
    cout << "Razlika " << br1 << " i " << br2 << " je " << br1 - br2 << "." << endl;
    cout << "Proizvod " << br1 << " i " << br2 << " je " << br1 * br2 << "." << endl;
    cout << "Kolicnik " << br1 << " i " << br2 << " je " << br1 / br2 << "." << endl;


    return 0;
}