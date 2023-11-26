/*

    ZADATAK 8: Napiši program koji će upotrebom switch-case omogućiti nakon unosa ocjene 
    ispis na ekranu rečenice Cestitam, polozili ste i dobili ocjenu dovoljan ! – ako je unos bio 
    2, Cestitam, polozili ste i dobili ocjenu dobar ! – ako je unos bio 3, i tako dalje... ako je 
    unos bio 1 poruka će glasiti Nažalost niste položili ispit. Pokusajte ponovno na drugom 
    ispitnom roku. 

*/

#include <iostream>
using namespace std;


int main(){

    int ocjena;

    cout << "Unesite ocjenu koju ste dobili na ispitu: ";
    cin >> ocjena;

    cout << "\n";

    switch (ocjena){

            case 1:
            cout << "Nažalost niste položili ispit. Pokušajte ponovo na drugom ispitnom roku.";
            break;

            case 2:
            cout << "Cestitam, polozili ste i dobili ocjenu dovoljan!";
            break;

            case 3:
            cout << "Cestitam, polozili ste i dobili ocjenu dobar!";
            break;

            case 4:
            cout << "Cestitam, polozili ste i dobili ocjenu vrlo dobar!";
            break;

            case 5:
            cout << "Cestitam, polozili ste i dobili ocjenu odličan!";
            break;

        default:
            cout << "Pogrešan unos";
    }

    cout << "\n\n";

    return 0;
}