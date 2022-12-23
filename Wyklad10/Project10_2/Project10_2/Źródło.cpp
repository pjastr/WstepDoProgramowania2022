#include <iostream>
using namespace std;
int main()
{
	int a[10];
	for (int i = 0; i < 10; ++i)
	{
		a[i] = i + 1;
	}
	int b[10]  { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int c[5]{};
	int d[5] = {};
	cout << a;
	return 0;
}