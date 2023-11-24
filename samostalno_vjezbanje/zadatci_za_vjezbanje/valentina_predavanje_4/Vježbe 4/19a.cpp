#include <iostream>
using namespace std;

int main(){

    int broj;
    int g1, g2;

    cout << "Unesite donju granicu: ";
    cin >> g1;

    cout << "Unesite gornju granicu: ";
    cin >> g2;

    cout << "Unesite broj s kojim ces provjeriti djeljivost: ";
    cin >> broj;

    for (int i=g1; i <=g2; i++){
        if (i % broj == 0){
            cout << i << endl;
        }
    }
    
    return 0;
}