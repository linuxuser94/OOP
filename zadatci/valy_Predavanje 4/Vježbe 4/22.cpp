#include <iostream>
using namespace std;

int main(){

    int g1, g2;

    cout << "Unesite donju granicu ";
    cin>> g1;

    cout << "Unesite gornju granicu ";
    cin>> g2;


    while(g1 <= g2){
        cout << g1++ << " " ;
    }
   
    return 0;
}