/**
 
    ZADATAK  6:  Napiši  program  koji  će  imitirati  kalkulator  bez  ikakvih  ograničenja  unutar 
    programa. Kalkulator treba moći raditi za unos 2 cijela broja. 
    
    Nakon unosa brojeva rezultati se ispisuju jedan ispod drugoga.

**/

#include <iostream>
using namespace std;

int main(){

    int br1, br2;

    cout << "Unesi prvi broj: ";
    cin >> br1;
    cout << "Unesi drugi broj: ";
    cin >> br2;

    cout << "\nZbir: " << br1 + br2 << endl;
    cout << "Razlika: " << br1 - br2 << endl;
    cout << "Množenje: " << br1 * br2 << endl;
    cout << "Dijeljenje: " << br1 / br2 << endl;


    return 0;
}

