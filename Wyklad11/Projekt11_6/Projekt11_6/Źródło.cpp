#include <iostream>
using namespace std;

void foo(int n, int m, int tab[2][3])
{
	cout << tab;
}

int main()
{
	int tab[2][3] = { {2,3,4},{-2,1,3} };
	foo(2, 3, tab);
}