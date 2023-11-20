#include <iostream>
using namespace std;

int main(){

    int broj;

    cout << "Unesi jedan cijeli broj: ";
    cin >> broj;

    if(broj % 2 == 0 && broj % 3 == 0){
        cout << "Uneseni broj " << broj << " je djeljiv sa 2 i 3.";
    } else if(broj % 2 == 0) {
        cout << "Uneseni broj " << broj << " je djeljiv samo sa 2.";
    } else if(broj % 3 == 0) {
        cout << "Uneseni broj " << broj << " je djeljiv samo sa 3.";
    } else {
        cout << "Uneseni broj " << broj << " nije djeljiv ni sa 2 ni sa 3.";
    }
    return 0;
}