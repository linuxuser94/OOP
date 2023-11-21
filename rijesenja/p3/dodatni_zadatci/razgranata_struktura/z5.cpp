// 5. Napisati program koji će tražiti unos tri broja. Potom će ispisati te brojeve od najmanjeg do najvećeg na ekranu.

#include <iostream>
using namespace std;

int main(){

    int prvi, drugi, treci;

    cout << "Unesi tri broja: ";
    cin >> prvi >> drugi >> treci;

    if ((prvi > drugi) && (prvi > treci)){
        cout << prvi << " je najveci." << endl;
    }
    else if ((drugi > prvi) && (drugi > treci)){
        cout << drugi << " je najveci." << endl;
    }
    else {
        cout << treci << " je najveci." << endl;
    }


    return 0;
}