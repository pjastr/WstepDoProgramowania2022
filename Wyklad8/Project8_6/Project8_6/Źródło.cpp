#include <iostream>
using namespace std;

void foo10(int a)
{
	a += 5;
	cout << "wewnatrz" << a << endl;
}

int main()
{
	int a = 7;
	cout << "przed" << a << endl;
	foo10(a);
	cout << "po" << a << endl;
	return 0;
}