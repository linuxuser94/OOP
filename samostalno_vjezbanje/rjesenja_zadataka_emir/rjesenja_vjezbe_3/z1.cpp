// 1. Provjeri je li broj pozitivan, negativan ili jednak nuli. Ispiši odgovarajuću poruku za svaki slučaj.

#include <iostream>
using namespace std;

int main(){

    int broj;
    cout << "Unesi broj: ";
    cin >> broj;

    if (broj > 0) {
        cout << "Broj je veći od nule." << endl;
    }
    else if (broj < 0) {
        cout << "Broj je manji od nule." << endl;
    } 
    else {
        cout << "Broj je jedank nuli." << endl;
    }

    return 0;
}