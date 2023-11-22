// 4. Napiši program koji će tražiti unos nekog broja, 
// a potom će ispisati sve brojeve od 1 do tog unesenog 
// broja. 

#include <iostream>
using namespace std;

int main(){

    int broj;
    cout << "Unesi zeljeni broj: ";
    cin >> broj;

    for (int i = 1; i <= broj; i++){
        cout << i << endl;
    }


    return 0;
}