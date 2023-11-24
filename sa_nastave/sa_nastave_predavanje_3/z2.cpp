#include <iostream>
using namespace std;

int main(){

    int n;

    cout << "Unesi broj: ";
    cin >> n;

/*profesorica bi ovo uradila tako da provjeri da li je broj nula prvo*/

    if (n % 2 == 0 && n % 3 == 0){
        cout << "Broj " << n << " je djeljiv i sa 2 i sa 3." << endl;
    }
    else if (n % 2 == 0){
        cout << "Broj " << n << " je dijeljiv samo sa 2." << endl;
    }
    else if (n % 3 == 0){
        cout << "Broj " << n << " je dijeljiv samo sa 3." << endl;
    }
    else if (n == 0){
        cout << "Broj n je nula. Greska." << endl;
    } 
    else {
        cout << "Broj nije dijeljiv sa 2 i 3." << endl;
    }

    return 0;
}