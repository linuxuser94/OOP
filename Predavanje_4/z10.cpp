#include <iostream>
using namespace std;


int main(){

    int broj_min, broj_max, a_sr;
    int brojac = 1;

    cout << "Unesite gornju granicu: ";
    cin >> broj_max;

    cout << "Unesi donju granicu: ";
    cin >> broj_min;

    while (brojac <= broj_max){
        cout << brojac << endl;
        brojac++;
        
    }

        a_sr = brojac/broj_max;
        cout << a_sr << endl;
    
    return 0;
}