// fltadd.cpp -- problemy z dok³adnoœci¹ liczb float
#include <iostream>
using namespace std;
int main()
{

    cout << (1.01 + 1.01) + 1.01 << endl;
    cout << 1.01 + (1.01 + 1.01) << endl;
    return 0;
}