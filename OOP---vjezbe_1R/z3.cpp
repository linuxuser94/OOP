/*

ZADATAK 3: Napiši program koji će ispisati tvoje ime 5x jedno ispod drugog.

*/

#include <iostream>
using namespace std;

int main()
{
    string ime = "emir"; // string je tip podatka koji sadrzi tekst, u ovom slucaju moje ime

    for (int i = 0; i < 5; i++ ) /* umjesto da kucamo cout ime pet puta, pravimo for petlju koja ce to uraditi za nas
    u zagradama se definise cijeli broj i odnosno INTEGER i koji je 0, dalje kazemo i ne smije biti vece od 5 
    i++ ce inkrementirati i za 1 dakle +1 i buduci da i broji od 0 to ce biti 0,1,2,3,4 tj. 5 brojeva*/
    {
    cout << i + 1 << " - " <<  ime << endl; // zato ovdje pisemo +1 da dobijemo od 1 do 5, isto se moze dobiti iznad da se promjeni i u 1 i stavi manje od 6
    }

    cout << "\n\n\n";

    return 0;
}