#include <iostream>
using namespace std;

int main(){
    int brojac = 0;
    for (int i=1; i <=100; i++){
        brojac += i;
    }
    cout << "Suma brojeva od 1 do 100 je " << brojac ;

    return 0;
}