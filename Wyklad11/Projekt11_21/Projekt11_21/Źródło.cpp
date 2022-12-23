#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int> w1 = { 3,-4,5 };
	w1.resize(5);
	for (int el : w1)
	{
		cout << el << endl;
	}
	cout << "---" << endl;
	w1.resize(2);
	for (int el : w1)
	{
		cout << el << endl;
	}
	cout << "---" << endl;
	w1.resize(5);
	for (int el : w1)
	{
		cout << el << endl;
	}
	cout << "---" << endl;
}