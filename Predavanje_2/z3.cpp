#include <iostream>
using namespace std;

int main(){

    int n1, n2;
    cout << "Unesi dva cijela broja: ";
    cin >> n1 >> n2;

    cout << "\n" << n1 << " + " << n2 << " = " << n1 + n2 << endl;
    cout << n1 << " - " << n2 << " = " << n1 - n2 << endl;
    cout << n1 << " * " << n2 << " = " << n1 * n2 << endl;
    cout << n1 << " / " << n2 << " = " << n1 / n2 << endl;
    cout << n1 << " % " << n2 << " = " <<n1 % n2 << endl << endl;


    return 0;
}