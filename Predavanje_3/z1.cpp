/*Provjeri jeli broj pozitivan negativan ili jednak 0*/

#include <iostream>
using namespace std;

int main(){

    int n;

    cout << "Unesi broj: ";
    cin >> n;

    if (n > 0){
        cout << "Broj " << n << " je pozitivan." << endl;}
        else if (n < 0) {
            cout << "Broj " << n << " je negativan." << endl;
        }
        else if (n == 0) {
            cout << "Broj je jednak nuli" << endl;
        }

    return 0;
}