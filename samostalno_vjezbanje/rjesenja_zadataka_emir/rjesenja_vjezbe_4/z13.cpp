// 13. Napisati program koji će tražiti unos nekog broja,
// a potom ispisati sve brojeve od 1 do tog unesenog 
// roja. 

#include <iostream>
using namespace std;

int main(){

    int i = 1;
    int broj;
    cout << "Unesi broj: ";
    cin >> broj;

    while (i <= broj){
        cout << i++ << endl;
    }


    return 0;
}