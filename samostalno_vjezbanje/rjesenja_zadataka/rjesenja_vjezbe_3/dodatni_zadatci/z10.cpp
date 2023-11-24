// 10. Napisati program koji traži unos 3 broja. 
// Zatim treba pronaći zbroj prvog i trećeg, te umnožak drugog i prvog.

#include <iostream>
using namespace std;

int main(){

    int br1,br2,br3;
    cout << "Unesi tri broja: ";
    cin >> br1 >> br2 >> br3;

    cout << "Zbri prvog i treceg broja je = " << br1+br3 << "." << endl;
    cout << "Proizvod drugog i prvog broja je = " << br2*br1 << "." << endl;


    return 0;
}