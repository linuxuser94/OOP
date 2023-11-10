#include <iostream>
using namespace std;

int main(){

    int n;

    cout << "Unesi broj n: ";
    cin >> n;

    if (n > 10){
        cout << "Broj je veći od 10." << endl;
    }
    else if (n < 10){
        cout << "Broj je manji od 10." << endl;
    }
    else if (n == 10) {
        cout << "Broj je 10." << endl;
    }

    return 0;
}