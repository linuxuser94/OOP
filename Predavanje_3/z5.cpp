#include <iostream>
using namespace std;

int main(){

    int DOB;
    int punoljetan;
    int input;

    cout << "Odaberite 1 ili 2:\n\n1. Unos godine rodjenja.\n2. Unos koliko imate godina.";
    cout << "\n\nVas odabir: ";
    cin >> input;

    switch (input){
        case 1:

        cout << "\nUnesite godinu rodjenja: ";
        cin >> DOB;
        cout << "-Vi imate " << 2023 - DOB << " godina.-";
        break;

        case 2:

        cout << "\nUnesite koliko imate godina: ";
        cin >> punoljetan;
        if (punoljetan < 18) {
            cout << "-Niste punoljetni-";
        } else {
            cout << "-Punoljetni ste.-";
        }
        break;
        default: 
        cout << "\n!--POGRESAN UNOS.--!";
    }

    cout << "\n\n";

    return 0;
}