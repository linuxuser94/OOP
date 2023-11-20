/*
    6. Napiši program koji će ponuditi korisniku dvije opcije koje može odabrati sa tipkovnice:
	    1 – da unese godinu rođenja, a program će vratiti koliko danas osoba ima godina
	    2 – da unese koliko ima godina, a program će vratiti je li osoba maloljetna ili punoljetna
*/

#include <iostream>
using namespace std;


int main(){

    int DOB;
    int god_18;
    int input;

    cout << "!----------/ UNESI 1 ili 2 \\----------!" << endl;
    cout << "1. Računa broj godina ako je unesena godina rođenja." << endl;
    cout << "2. Određuje da li je osoba punoljetna ako je uneseno koliko osoba ima godina." << endl;
    cout << "-------------------------------------------------------------------------------" << endl;
    cout << "IZBOR: ";
    cin >> input;

    switch (input){
        case 1:
            cout << "\nUnesite godinu rođenja: ";
            cin >> DOB;
            cout << "\n!--Osoba ima " << 2023 - DOB << " godina.--!\n" << endl;
            break;
        case 2:
            cout << "\nUnesite koliko imate godina: ";
            cin >> god_18;
            if (god_18 < 18){
                cout << "!--Osoba nije punoljetna jer ima: " << god_18 << " godina.--!\n" << endl;
            }
            else {
                cout << "!--Osoba je punoljetna!--!" << endl;
            }
            break;
        default:
            cout << "\n\n!--POGREŠAN UNOS--!\n\n" << endl;
    }


}