#include <iostream>
using namespace std;

int foo2(int a)
{
	a = 4;
	int w = a + 4;
	cout << "a" << w << endl;
	return w;
}

int main()
{
	int a = 5;
	cout << "b" << foo2(a) << endl;
	cout << "c" << a << endl;
}

