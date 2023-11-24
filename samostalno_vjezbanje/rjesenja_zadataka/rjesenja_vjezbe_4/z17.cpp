// 17. Ispisati sve parne brojeve od 5 do 10. 

#include <iostream>
using namespace std;

int main(){

    int i = 5;

    do {
        i++;
        if (i % 2 == 0){
        cout << i << endl;
        }
    } while (i <= 10);


    return 0;
}