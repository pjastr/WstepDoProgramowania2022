#include <iostream>
#include <array>
using namespace std;

int main()
{
	array<int, 3> a1 = { 1, -2, 3 };
	for (int i = 0; i < a1.size(); i++)
	{
		cout << a1.at(i) << endl;
	}
}