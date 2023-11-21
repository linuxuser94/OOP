// 7.Napisati program koji će tražiti da uneseš temeprature za prvih šest mjeseci u godini, 
// a potom će ispisati prosječnu temperaturu.

#include <iostream>
using namespace std;

int main(){

    float januar_temp, februar_temp, mart_temp, april_temp, maj_temp, juni_temp;

    cout << "Unesi temperaturu za Januar: "; // 1
    cin >> januar_temp;

    cout << "-------------------------------" << endl;

    cout << "Unesi temperaturu za Februar: "; // 2
    cin >> februar_temp;

    cout << "-------------------------------" << endl;

    cout << "Unesi temperaturu za Mart: "; // 3
    cin >> mart_temp;

    cout << "-------------------------------" << endl;

    cout << "Unesi temperaturu za April: "; // 4
    cin >> april_temp;

    cout << "-------------------------------" << endl;

    cout << "Unesi temperaturu za Maj: "; // 5
    cin >> maj_temp;

    cout << "-------------------------------" << endl;

    cout << "Unesi temperaturu za Juni: "; // 6
    cin >> juni_temp;

    cout << "\n\nTemperature su: " << endl;
    cout << "\nJanuar: " << januar_temp << " C" << endl;
    cout << "Februar: " << februar_temp << " C" << endl;
    cout << "Mart: " << mart_temp << " C" << endl;
    cout << "April: " << april_temp << " C" << endl;
    cout << "Maj: " << maj_temp << " C" << endl;
    cout << "Juni: " << juni_temp << " C" << endl;
    cout << "-------------------------------" << endl;
    cout << "Prosječna temperatura prvih 6. mjeseci je: "
        <<(januar_temp + februar_temp + mart_temp + april_temp + maj_temp + juni_temp) / 6
        << " C" << endl;


    return 0;
}