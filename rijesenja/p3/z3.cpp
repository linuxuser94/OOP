// 3. Provjeri je li uneseni broj veći od 10, manji od 10 ili jednak 10. Ispiši odgovarajuću poruku za svaki slučaj.

#include <iostream>
using namespace std;

int main(){

    int broj;
    cout << "Unesi broj: ";
    cin >> broj;

    if (broj > 10) {
        cout << "Broj je veći od 10." << endl;
    }
    else if (broj < 10) {
        cout << "Broj je manji od 10." << endl;
    }
    else {
        cout << "Broj je 10." << endl;
    }


    return 0;
}