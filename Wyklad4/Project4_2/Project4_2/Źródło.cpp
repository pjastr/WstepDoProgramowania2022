#include <iostream>

using namespace std;
int main()
{
    char ch = 'M';       // przypisanie zmiennej ch kodu ASCII znaku M
    int i = ch;          // zapis tego samego kodu jako wartoœci int
    cout << "Kod ASCII znaku " << ch << " to " << i << endl;

    cout << "Dodajemy do kodu znaku jedynke:" << endl;
    ch = ch + 1;          // zmiana kodu znaku ze zmiennej ch 
    i = ch;               // zapis nowego kodu znaku w i
    cout << "Kod ASCII znaku " << ch << " to " << i << endl;

    // u¿ycie metody cout.put() do pokazania znaku
    cout << "Wypisanie char ch za pomoca cout.put(ch): ";
    cout.put(ch);

    // u¿ycie metody cout.put() do pokazania sta³ej znakowej
    cout.put('!');
    return 0;
}