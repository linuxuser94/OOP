#include <iostream>
using namespace std;

int main(){

    int n;

    cout << "Unesi broj n: ";
    cin >> n;

    if (n > 100){
        cout << "Broj je veći od 100." << endl;
    }
    else if (n < 1){
        cout << "Broj je manji od 1." << endl;
    }
    else if (n >= 1 && n <= 100) {
        cout << "Broj je u rasponu od 1 do 100." << endl;
    }

    return 0;
}