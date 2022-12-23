#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int> w1 = { 3,4,5,-3 };
	for (int el : w1)
	{
		cout << el << endl;
	}
	cout << "---" << endl;
	for (int i = 0; i < w1.size(); i++)
	{
		cout << w1[i] << endl;
	}
}