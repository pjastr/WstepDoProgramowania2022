#include <iostream>
#include <climits>              // w starszych systemach uzyc limits.h
int main()
{
    using namespace std;
    int n_int = INT_MAX;        // inicjalizacja n_int maks.liczba int
    short n_short = SHRT_MAX;   // symbole zdefiniowano w pliku limits.h
    long n_long = LONG_MAX;
    long long n_llong = LLONG_MAX;

    // operator sizeof zwraca wielkosc typu lub zmiennej
    cout << "int ma " << sizeof(int) << " bajty." << endl;
    cout << "short ma " << sizeof n_short << " bajty." << endl;
    cout << "long ma " << sizeof n_long << " bajty." << endl << endl;
    cout << "long long ma " << sizeof n_llong << " bajtow." << endl;
    cout << endl;

    cout << "Wartosci maksymalne:" << endl;
    cout << "int: " << n_int << endl;
    cout << "short: " << n_short << endl;
    cout << "long: " << n_long << endl;
    cout << "long long: " << n_llong << endl << endl;

    cout << "Minimalna wartosc typu int = " << INT_MIN << endl;
    cout << "Bitow na bajt = " << CHAR_BIT << endl;
    return 0;
}