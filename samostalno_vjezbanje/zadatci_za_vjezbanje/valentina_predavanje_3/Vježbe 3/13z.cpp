#include <iostream>
using namespace std;

int main(){

    int broj;

    cout << "Unesi jedan cijeli broj: ";
    cin >> broj;

    if(broj >= 1 && broj <= 100){
        cout << "Uneseni broj " << broj << " je u rasponu od 1-100.";
    } else if(broj < 1) {
        cout << "Uneseni broj " << broj << " je manji od 1.";
    } else {
        cout << "Uneseni broj " << broj << " je veci od 100";
    }
    return 0;
}