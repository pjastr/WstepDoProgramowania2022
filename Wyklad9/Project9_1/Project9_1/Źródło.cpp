#include <iostream>

using namespace std;

int silnia(int n)
{
	if (n == 0)
	{	
		cout << "n= " << n << endl;
		return 1;
	}
	cout << "n= " << n << endl;
	return n * silnia(n - 1);
}

int main()
{
	int a = 5;
	printf("%d\n", silnia(a));
	return 0;
}