// 3. Napiši isti program kao zadatak 1. Samo za troznamenkasti broj.


#include <iostream>
using namespace std;

int main(){

    int broj;
    cout << "Unesi trocifreni broj: ";
    cin >> broj;

    cout << (broj % 10) * 100 + ((broj % 100) / 10) * 10 + (broj / 100);


}
