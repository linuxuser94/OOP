// 2. Ispiši parne brojeve od 1 do 20.

#include <iostream>
using namespace std;

int main(){

    for (int i = 1; i <= 20; i++){
        if (i % 2 == 0){
        cout << i << endl;
        }
    }

    return 0;
}