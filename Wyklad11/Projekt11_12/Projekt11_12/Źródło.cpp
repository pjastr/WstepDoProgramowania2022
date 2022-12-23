#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int> w1 = { 3,4,5,9 };
	vector<int> w2 = { -3,11,-22 };
	w1.swap(w2);
	cout << "w1" << endl;
	for (int el : w1)
	{
		cout << el << endl;
	}
	cout << "w2" << endl;
	for (int el : w2)
	{
		cout << el << endl;
	}
}