#include <iostream>
using namespace std;
int main()
{

    cout.setf(ios_base::fixed, ios_base::floatfield); //przelacznik by widziec rozwiniecia
    cout << "Dzielenie calkowitoliczbowe: 9/5 = " << 9 / 5 << endl;
    cout << "Dzielenie zmiennoprzecinkowe: 9.0/5.0 = ";
    cout << 9.0 / 5.0 << endl;
    cout << "Dzielenie mieszane: 9.0/5 = " << 9.0 / 5 << endl;
    cout << "Stale typu double: 1e7/9.0 = ";
    cout << 1.e7 / 9.0 << endl;
    cout << "Stale typu float: 1e7f/9.0f = ";
    cout << 1.e7f / 9.0f << endl;
    return 0;
}