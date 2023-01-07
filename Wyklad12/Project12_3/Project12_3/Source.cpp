#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<vector<int>> vect = { {1, 2, 3,5,5}, {4, -2, 5, 9}, {9} };
    for (int i = 0; i < vect.size(); i++)
    {
        for (int j = 0; j < vect[i].size(); j++)
        {
            cout << vect[i][j] << " ";
        }
        cout << endl;
    }
}