#include <iostream>
#include <vector>
using namespace std;

int main()
{
	typedef vector<int> vi;
	vi w1 = { 3,4,5 };
	for (int el : w1)
	{
		cout << el << endl;
	}
}