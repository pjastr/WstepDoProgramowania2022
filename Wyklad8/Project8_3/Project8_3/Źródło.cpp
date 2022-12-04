#include <iostream>
using namespace std;

int foo2(int a)
{
	return a + 4;
}

int main()
{
	int x = foo2(3+3);
	int y;
	//cin >> y;
	//cout << foo2(y);
	int a = 5;
	cout << foo2(a);
}

