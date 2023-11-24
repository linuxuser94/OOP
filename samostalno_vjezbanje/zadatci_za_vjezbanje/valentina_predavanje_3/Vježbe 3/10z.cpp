#include <iostream>
using namespace std;

int main(){

    int broj;

    cout << "Unesi jedan cijeli broj: ";
    cin >> broj;

    if(broj > 0){
        cout << "Broj je pozitivan";
    } else if(broj < 0){
        cout << "Broj je negativan";
    } else {
        cout << "Broj je jednak 0";
    }
    return 0;
}