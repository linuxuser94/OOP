// 4. Napisati program koji će moći prepoznati je li uneseni broj pozitivan, negativan ili je uneseni broj 0.

#include <iostream>
using namespace std;

int main(){

    int n;
    cout << "Unesi broj: ";
    cin >> n;

    if (n > 0){
        cout << "Broj je pozitivan." << endl;
    }
    else if (n < 0){
        cout << "Broj je negativan." << endl;
    }
    else {
        cout << "Broj je nula." << endl;
    }

    return 0;
}