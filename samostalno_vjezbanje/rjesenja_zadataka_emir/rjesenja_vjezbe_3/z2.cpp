// 2. Provjeri je li uneseni broj djeljiv s 2 i 3. Ispiši odgovarajuću poruku za svaki slučaj.

#include <iostream>
using namespace std;

int main(){

    int broj;
    cout << "Unesi broj: ";
    cin >> broj;

    if (broj % 2 == 0) {
        cout << "Broj je dijeljiv sa 2." << endl;
    }
    else if (broj % 3 == 0) {
        cout << "Broj je dijeljiv sa 3." << endl;
    }


    return 0;
}