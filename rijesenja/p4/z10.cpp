// 10. Napiši program koji će tražiti unos nekog broja, a potom ispisati sve brojeve u rasponu od 1 do 20 
// koji su djeljivi tim unesenim brojem.

#include <iostream>
using namespace std;

int main(){

    int broj;
    cout << "Unesi broj: ";
    cin >> broj;

    for (int i = 1; i <= 20; i++){
        if (i % broj == 0){
            cout << i << endl;
        }
    }

    return 0;
}