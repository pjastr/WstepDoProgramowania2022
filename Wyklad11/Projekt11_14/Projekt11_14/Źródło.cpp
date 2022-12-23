#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int> w1 = { 3,4,5 };
	w1.clear();
	cout << "Size:" << w1.size() << endl;
	for (int el : w1)
	{
		cout << el << endl;
	}
}