#include <iostream>
#include <compare>

using namespace std;
int main()
{
    short a = 4;
    short b = 14;
    cout << sizeof(short) << endl;
    cout << (a & b) << endl;
    cout << (a | b) << endl;
    cout << (a ^ b) << endl;
    cout << (~a) << endl;
    cout << (a << 1) << endl;
    cout << (a >> 1) << endl;
    return 0;
}