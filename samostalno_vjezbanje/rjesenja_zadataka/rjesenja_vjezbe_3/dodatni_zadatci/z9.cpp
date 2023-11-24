// 9. Napisati program koji će tražiti unos nekog broja a potom koristeći se funkcijom pow izračunati njegov kvadrat. 
// Funkcija pow(osnova, eksponent) se nalazi u biblioteci cmath i mora se navesti u zaglavlju programa.

#include <iostream>
#include <cmath>

using namespace std;

int main(){

    int broj;
    cout << "Unesi broj: ";
    cin >> broj;
    
    cout << "Koristeci funkciju pow, " << broj << " kvadriran je = " << pow(broj,2) << "." << endl;


    return 0;
}