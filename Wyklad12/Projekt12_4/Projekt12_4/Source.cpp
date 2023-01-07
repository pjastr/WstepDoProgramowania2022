#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<vector<int>> vect = { {1, 2, 3}, {4, -2, 5, 9, 0}, {9, 1, -2} };
    for (vector<int> vect1D : vect)
    {
        for (int x : vect1D)
        {
            cout << x << " ";
        }
        cout << endl;
    }
}