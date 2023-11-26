#include <iostream>
using namespace std;

int main(){

    int opcija;
    int godR;
    int brG;

    cout << "Izaberi 1 ako želiš saznati koliko imas godina ili 2 ako zelis saznati jesi li punoljetan.";
    cin >> opcija;

    switch(opcija){
        case 1:
        cout << "Koje godine si rodjen/a ?";
        cin >> godR;

        cout << " Vi imate " << 2023 - godR << " godina" <<  endl;
        break;

        case 2:
        cout << "Unesi koliko imas godina ";
        cin >> brG;

        if(brG < 18){
            cout << "Vi ste maloljetni";
        } else
        cout << "Vi ste punoljetni" ;
        break;

        default:
        cout << "Pogresan unos podataka.";
        
    }
    
    return 0;
}