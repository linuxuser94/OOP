// 5. Ispiši faktorijel unesenog broja.

#include <iostream>
using namespace std;

int main(){


    int n;
    cout << "Unesi n: ";
    cin >> n;

    int n_baza = n;

    cout << "----------------------" << endl;


    if (n_baza == 0){
        cout << "Faktorijel od 0 je 1." << endl;
    }
    else if(n_baza == 1){
        cout << "Faktorijel od 1 je 1." << endl;
    }
    else 
    {
        for (int i = n - 1; i != 0; i--)
        {
            n = n * i;

            if (i == 1)
            {
                cout << "Faktorijel od " << n_baza << " je " << n << "." <<endl;
            }
        }
    }


    cout << "----------------------" << endl;

    return 0;
}