#include <iostream>

using namespace std;

int main(){

    int cijeliBroj ;
    float decimalniBroj ;
    char znak ;
    bool logickaOznaka ;
    string rijec ;

    cout << "Unesi neki cijeli broj: ";
    cin >> cijeliBroj;
    cout << "Unijeli ste broj " << cijeliBroj << "." << endl;

    cout << "\nUnesi neki decimalni broj: ";
    cin >> decimalniBroj;
    cout << "Unijeli ste broj " << decimalniBroj << "." << endl;

    cout << "\nUnesi neki znak: ";
    cin >> znak;
    cout << "Unijeli ste znak " << znak << "." << endl;

    cout << "\nUnesi neku logicku oznaku: "; // unijeti 1 ili 0 gdje je 1 TRUE, 0 FALSE
    cin >> logickaOznaka;
    cout << "Unijeli ste  " << logickaOznaka << "." << endl;

    cout << "\nUnesi neku rijec: ";
    cin >> rijec;
    cout << "Unijeli ste  " << rijec << "." << endl;


    cout << "\n\n\n\n";

    return 0;
}