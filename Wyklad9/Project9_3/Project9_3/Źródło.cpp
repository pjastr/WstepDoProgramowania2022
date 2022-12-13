#include <iostream>

using namespace std;

int czescCalkowitaPierwiastka(int n);

int main()
{
	cout << czescCalkowitaPierwiastka(4) << endl;
	cout << czescCalkowitaPierwiastka(5) << endl;
	cout << czescCalkowitaPierwiastka(3) << endl;
}

int czescCalkowitaPierwiastka(int n)
{
	int i;
	for (i = 0; i * i <= n; i++)
	{

	}
	return i-1;
}
