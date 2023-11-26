/*

5. Provjeri je li uneseni broj u rasponu od 1 do 100. 
Ispiši poruku "Broj je manji od 1", "Broj je veći od 100" ili "Broj je u rasponu od 1 do 100" za svaki slučaj.

*/

#include <iostream>
using namespace std;

int main(){

    int broj;
        cout << "Unesi broj: ";
        cin >> broj;

        if (broj < 1) {
            cout << "Broj je manji od 1." << endl;
        }
        else if (broj > 100) {
            cout << "Broj je veci od 100." << endl;
        }
        else {
            cout << "Broj je u rasponu od 1 do 100." << endl;
        }

return 0;
}