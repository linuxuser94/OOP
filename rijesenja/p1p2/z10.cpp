/*

ZADATAK 10: U ovom programu koristi if petlju u kojoj ćeš ispitivati je li uneseni broj kojeg 
korisnik unosi sa tipkovnice manji od broja 5. Zatim proširi zadatak sa else if, else i ispituj je li 
veći ili jednak broju 5. 

*/

#include <iostream>
using namespace std;

int main(){

    int input;
    cout << "Unesi broj: ";
    cin >> input;

    cout << "\n";

    if (input < 5){
        cout << "Broj " << input << " je manji od 5." << endl;
    }
    else if (input > 5){
        cout << "Broj " << input << " je veći od 5." << endl;
    }
    else {
        cout << "Broj je 5.";
    }


    return 0;
}