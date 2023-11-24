// 4. Ispiši sumu brojeva od 1 do 100.

#include <iostream>
using namespace std;

int main(){

    int suma = 0;

    for (int i = 1; i <= 100; i++){
        suma = suma + i;
    }

    cout << "Suma od 1 do 100 je " << suma << "." << endl << endl;

    return 0;
}
