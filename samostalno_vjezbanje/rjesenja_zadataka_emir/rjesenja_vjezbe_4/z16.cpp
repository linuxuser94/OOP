// 16. Napisati program koji će tražiti unos raspona  niza, 
// a potom ispisati aritmetičku sredinu samo parnih 
// brojeva unutar tog niza.

#include <iostream>
using namespace std;

int main(){

    int br1, br2, brojac, asr, zbir;
    zbir = 0;
    brojac = 0;
    cout << "Unesi prvi broj: ";
    cin >> br1;
    cout << "Unesi drugi broj: ";
    cin >> br2;
    cout << "----------------------------------------------" << endl;

    cout << "Za zadani niz od " << br1 << " do " << br2
    << " parni su brojevi: ";

    while (br1 <= br2){
            if (br1 % 2 == 0){
                if (br1 == br2){
                    cout << br1;
                    brojac++;
                    zbir = zbir + br1;
                }
                else {
            brojac++;
            zbir = zbir + br1;
            cout << br1 << ", ";
                }
        }
        br1++;
    }

    cout << endl;
    cout << "Njihov zbir je: " << zbir << endl << endl;
    asr = zbir/brojac;
    cout << "Ako je broj parnih brojeva " << brojac << " onda je "
    << "zbir svih parnih brojeva " << zbir << " podijeljen sa " << brojac << " jednak "
    << asr << "." << endl;

    cout << "\n\n";
    return 0;
}