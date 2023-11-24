// riješi izraz

#include <iostream>
using namespace std;

int main(){

    int x,y,z;
    cout << "Unesi x i y: ";
    cin >> x >> y;
    cout << "---------------------" << endl;
    cout << "x - y = " << x - y << endl;
     cout << "---------------------" << endl;

    if (x - y < 2){

        z = x + y;

        cout << "Ako je x = " << x;
        cout << " i ako je y = " << y << endl;
        cout << "Onda je x - y < 2" << endl << endl;
        cout << "\nŠto znači da je z = " << x << " + " << y << endl;
        cout << "z = " << z << endl << endl;

    } else {
        z = x - y;

        cout << "Ako je x = " << x;
        cout << " i ako je y = " << y << endl;
        cout << "Onda je x - y >= 2" << endl << endl;
        cout << "\nŠto znači da je z = " << x << " - " << y << endl;
        cout << "z = " << z << endl << endl;
    }


    return 0;
}