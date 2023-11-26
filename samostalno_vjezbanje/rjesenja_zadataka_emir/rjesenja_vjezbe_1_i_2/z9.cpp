/*

    ZADATAK 9: Riješi ZADATAK 6 koristeći switch-case naredbu. Korisnik unosi prvi cijeli broj, 
    potom bira koju operaciju će izvršiti (+,-,* ili /), unosi drugi broj, a potom program vraća rješenje 
    te računske operacije. Napomena: ukoliko korisnik unese neki od znakova računskih operacija 
    koje nisu predviđene treba dobiti upozorenje. Nema mogućnosti ponovnog unosa, program tu 
    završava. Što se tiče djeljenja s 0 tu nema u ovom zadatku ograničenja nikakvih (ne koristimo 
    još uvijek petlje).

*/

#include <iostream>
using namespace std;

int main(){

    int br1, br2;
    char input;

    cout << "Unesi broj 1: ";
    cin >> br1;
    cout << "Unesi željenje matematičku operaciju: ";
    cin >> input;
    cout << "Unesi broj 2: ";
    cin >> br2;
    cout << "\n";

   switch (input){

    case '+':
        cout << br1 << " + " << br2 << " = " <<br1 + br2;
        break;
    
    case '-':
        cout << br1 << " - " << br2 << " = " <<br1 - br2;
        break;

    case '*':
        cout << br1 << " * " << br2 << " = " <<br1 * br2;
        break;

    case '/':
        cout << br1 << " / " << br2 << " = " <<br1 / br2;
        break;
    default: 
        cout << "Pogrešan unos.";
   }

   cout << "\n\n";

    return 0;
}