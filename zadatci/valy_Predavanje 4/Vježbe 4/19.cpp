#include <iostream>
using namespace std;

int main(){

    int broj;
    cout << "Unesite jedan broj: ";
    cin >> broj;

    for (int i=1; i <=20; i++){
        if (i % broj == 0){
            cout << i << endl;
        }
    }
    
    return 0;
}