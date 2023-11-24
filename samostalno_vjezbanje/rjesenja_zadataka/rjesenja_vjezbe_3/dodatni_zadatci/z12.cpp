// 12. Napisati program koji će tražiti unos godine rođenja, a potom vratiti koliko godina danas osoba ima.

#include <iostream>
using namespace std;

int main(){

    int DOB;
    cout << "Unesi godinu rođenja: ";
    cin >> DOB;

    cout << "Vi imate " << 2023 - DOB << " godina." << endl << endl;

    return 0;
}