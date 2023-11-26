// Napisati program koji će tražiti unos dva broja, 
// a potom će ih ispisati u obrnutom redoslijedu od onog kako su uneseni.

#include <iostream>
using namespace std;

int main(){

    int br1, br2;

    cout << "Unesi broj 1: ";
    cin >> br1;

    cout << "------------------" << endl;

    cout << "Unesi broj 2: ";
    cin >> br2;

    cout << "------------------" << endl;

    cout << "Uneseni brojevi su: " << endl;
    cout << br2 << endl;
    cout << br1 << endl;


    return 0;
}