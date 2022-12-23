#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int> w1 = { 3,4,5,-2,3 };
	cout << "element zerowy:" << w1[0] << endl;
	w1[2] = 11;
	for (int el : w1)
	{
		cout << el << endl;
	}
}