#include <iostream>
using namespace std;

int foo1();

int main()
{
    int x = foo1();
    cout << x << endl;
    cout << foo1() << endl;
    char znak = foo1();
    cout << znak << endl;
    double z = foo1();
    cout << z;
}

int foo1()
{
    return 62;
}