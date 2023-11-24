#include <iostream>
using namespace std;

int main(){

    int brojac = 0;

    for (int i=1; i<=100; i++){
        brojac = brojac + i;
    }

    cout << "Suma brojeva je: " << brojac << endl;

    return 0;
}