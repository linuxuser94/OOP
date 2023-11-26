// 6. Napiši program koji će ispisati prvih 20 brojeva Fibonacci niza koristeći for petlju. 
// Fibonacci niz počinje s 0 i 1, a svaki sljedeći broj u nizu je zbroj prethodna dva broja (0, 1, 1, 2, 3, 5, 8, 13, ...)

#include <iostream>
using namespace std;

int main(){

    int i = 0;
    int fib = i + 1;

    for (i = 0; i <= 20; i++){
    if (i>1){
        cout << i + fib;
    }
    else {
        cout << i + i;
        }
    }

    return 0;
}