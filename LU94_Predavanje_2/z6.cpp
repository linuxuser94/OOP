#include <iostream>
using namespace std;

int main() {

    int n1;
    float n2;
    char matOperacija;

    cout << "Unesite jedan broj: ";
    cin >> n1;

    cout << "\nUnesite matematicku operaciju: ";
    cin >> matOperacija;

    cout << "\nUnesite drugi broj: ";
    cin >> n2;

    switch (matOperacija){
        case '+':
            cout << "\nZbir brojeva " << n1 << " + " << n2 << " je " << n1 + n2 << "." << endl;
            break;
        case '-':
            cout << "\nRazlika brojeva " << n1 << " - " << n2 << " je " << n1 - n2 << "." << endl;
            break;
        case '*':
            cout << "\nProizvod brojeva " << n1 << " * " << n2 << " je " << n1 * n2 << "." << endl;
            break;
        case '/':
            cout << "\nDijeljenje brojeva " << n1 << " / " << n2 << " je " << n1 / n2 << "." << endl;
            break;
        default:
            cout << "\nPogrešna oznaka!" << endl;
            break;
    }

    cout << endl;

    return 0;
}