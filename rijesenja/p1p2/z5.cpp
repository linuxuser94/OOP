/**
    ZADATAK 5: Napiši program koji će tražiti da uneseš ime i koliko imaš godina, 
    a potom ispisati rečenicu Zoveš se ime, imaš godina godina.
**/

#include <iostream>
using namespace std;

int main(){

    string ime;
    int god;

    cout << "Unesi svoje ime: ";
    cin >> ime;
    cout << "Unesi koliko imas godina: ";
    cin >> god;

    cout << "\nZoveš se " << ime << ", imaš " << god << " godina.";

    cout << "\n\n";

    return 0;
}

