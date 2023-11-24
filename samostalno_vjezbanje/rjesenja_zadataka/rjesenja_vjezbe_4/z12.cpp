// 12. Napisati program koji će ispisati brojeve od 1 do 10 ali unatrag.
#include <iostream>
using namespace std;

int main(){

    int i = 10;

    while (i >= 1){
        cout << i-- << endl;
    }


    return 0;
}