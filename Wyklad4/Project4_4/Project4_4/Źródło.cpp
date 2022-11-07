#include <iostream>

using namespace std;
int main()
{
    int a = -5;
    unsigned int b = (unsigned int)a;
    unsigned int c = unsigned int(a);
    cout << b << endl;
    cout << c << endl;
    return 0;
}