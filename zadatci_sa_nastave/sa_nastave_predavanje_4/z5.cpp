#include <iostream>
using namespace std;

int main(){

    int broj;
    cout << "Unesi broj: ";
    cin >> broj;

    for (int i=1; i<=20; i++){
        if (i % broj == 0){
            cout << i << " je dijeljivo sa: " << broj << endl;
        }
    }

    cout << "\n\n";

    return 0;
}