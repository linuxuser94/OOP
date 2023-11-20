#include <iostream>
using namespace std;

int main(){

    int broj;

    cout << "Unesi jedan cijeli broj: ";
    cin >> broj;

    if(broj > 10){
        cout << "Broj je veci od broja 10.";
    } else if(broj < 10){
        cout << "Broj je manji od broja 10.";
    } else {
        cout << "Broj je jednak broju 10.";
    }
    return 0;
}