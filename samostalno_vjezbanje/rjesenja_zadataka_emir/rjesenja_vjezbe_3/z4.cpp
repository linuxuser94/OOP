/*

    4. Provjeri je li uneseni broj višekratnik broja 5 ili broja 7. Ispiši odgovarajuću poruku za svaki slučaj.

*/

#include <iostream>
using namespace std;

int main(){

    int broj;
        cout << "Unesi broj: ";
        cin >> broj;

        if (broj % 5 == 0) {
            cout << "Broj je dijeljiv sa 5." << endl;
        }
        else if (broj % 7 == 0) {
            cout << "Broj je dijeljiv sa 7." << endl;
        }
        else {
            cout << "Broj nije dijeljiv ni sa 5 ni sa 7." << endl;
        }

return 0;
}