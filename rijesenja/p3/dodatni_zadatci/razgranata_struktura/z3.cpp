// 3. Napiši program koji će ispitati je li uneseni broj paran ili je neparan te ispisati na ekranu.

#include <iostream>
using namespace std;

int main(){

    int n;
    cout << "Unesi broj: ";
    cin >> n;

    if (n % 2 == 0) {
    cout << "Broj je paran.\n\n";
    }
    else {
        cout << "Broj nije paran.\n\n";
    }

    return 0;
}