// riješi izraz


#include <iostream>
using namespace std;

int main(){

    int x,y;

    cout << "Unesi x: ";
    cin >> x;
    cout << "----------------" << endl;

    if (x < 3){
        y = x - 1;
        cout << "Ako je x = " << x << " onda je x < 3" << endl << endl;
        cout << "y = " << x << " - 1" << endl;
        cout << "y = " << y << endl << endl;
    } else {
        y = x + 3;
        cout << "Ako je x = " << x << " onda je x >= 3" << endl << endl;
        cout << "y = " << x << " + 3" << endl;
        cout << "y = " << y << endl << endl;
    }


    return 0;
}