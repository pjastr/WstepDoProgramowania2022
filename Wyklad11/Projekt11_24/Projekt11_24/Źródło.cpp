#include <iostream>
#include <vector>
using namespace std;

void foo(vector<int>& vect)
{
	vect.push_back(15);
}

int main()
{
	vector<int> w1 = { 3,-4,5 };
	foo(w1);
	for (int i = 0; i < w1.size(); i++)
	{
		cout << w1.at(i) << endl;
	}
}