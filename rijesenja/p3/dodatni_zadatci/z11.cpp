// 11. Napisati program koji će tražiti da uneseš duljinu kvadrata, a potom izračunati njegovu površinu.

#include <iostream>
#include <cmath>
using namespace std;

int main(){

    float duzina;

    cout << "Unesi dužinu kvadrata: ";
    cin >> duzina;

    float p = pow(duzina,2);

    cout << "Duzina kvadrata je = " << duzina 
        << " što znači da je njegova površina P = a² odnosno P = " << p << "." << endl;


    cout << "\n\n";



    return 0;
}