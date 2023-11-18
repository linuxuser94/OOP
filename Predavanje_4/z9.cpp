#include <iostream>
using namespace std;


int main(){

    int broj_min, broj_max;

    cout << "Unesite gornju granicu: ";
    cin >> broj_max;

    cout << "Unesi donju granicu: ";
    cin >> broj_min;

    while (broj_min <= broj_max){
        cout << broj_min++ << endl;  
    }
    
    return 0;
}