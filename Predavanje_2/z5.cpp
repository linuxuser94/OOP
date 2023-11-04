#include <iostream>
using namespace std;

int main() {

    int ocjena;

    cout << "Unesite ocjenu koju ste dobili: ";
    cin >> ocjena;
    cout << "\n";

    switch (ocjena){
        case 1:
            cout << "Nažalost pali ste na ispitu." << endl;
            break;
        case 2:
            cout << "Dobili ste ocjenu " << ocjena <<"." << endl;
            break;
        case 3:
            cout << "Dobili ste ocjenu " << ocjena <<"." << endl;
            break;
        case 4:
            cout << "Dobili ste ocjenu " << ocjena <<"." << endl;
            break;
        case 5:
            cout << "Čestitamo dobili ste " << ocjena <<"." << endl;
            break;
        default:
            cout << "Upisali ste ne vazecu ocjenu." << endl;
            break;
    }

    cout << endl;

    return 0;
}