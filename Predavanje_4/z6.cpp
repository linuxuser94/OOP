#include <iostream>
using namespace std;

int main(){

    int broj_min;
    int broj_max;
    int djelilac;
    
    cout << "Unesi gornju granicu: ";
    cin >> broj_max;
    cout << "Unesi donju granicu: ";
    cin >> broj_min;
    cout << "Unesi djelilac: ";
    cin >> djelilac;

    for (int i=broj_min; i<=broj_max; i++){
        if (i % djelilac == 0){
            cout << i << " je dijeljivo sa: " << djelilac << endl;
        }
    }

    cout << "\n\n";

    return 0;
}