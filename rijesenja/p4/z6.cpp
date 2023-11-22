// 6. Napiši program koji će ispisati sumu prvih 5 brojeva.

#include <iostream>
using namespace std;

int main(){

    int broj = 0;

    for (int i = 1; i <= 5; i++){
        broj = broj + i;
    }

    cout << broj;


    return 0;
}