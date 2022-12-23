#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int> w1 = { 3,4,5 };
	w1.pop_back();
	for (int el : w1)
	{
		cout << el << endl;
	}
}