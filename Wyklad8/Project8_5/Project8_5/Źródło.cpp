#include <iostream>
using namespace std;

float foo3(int a, int b)
{
	return (b + a) / 3.0;
}

void foo4()
{
	cout << "abc";
}

void foo5(int a)
{
	cout << a * 8 << endl;
}

int main()
{
	cout << foo3(4, 2) << endl;
	foo4();
	foo5(3);
}
