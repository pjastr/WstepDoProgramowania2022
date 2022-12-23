#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> normal;
    cout << normal.capacity() << endl;
    for (int loop = 0; loop != 10; ++loop)
    {
        normal.push_back(1);
        cout << normal.capacity() << endl;
    }
    return 0;
}