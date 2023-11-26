// 15. Napisati program koji će ispisati sve parne brojeve od 20 do 40. 

#include <iostream>
using namespace std;

int main(){

    int br1 = 20;
    int br2 = 40;

    while (br1 <= br2){
        cout << br1++ << endl; 
        // ovaj zadatak se trebao rijesiti sa IF, ali ovo je krace i lakse
    }

    return 0;
}