#include <iostream>
using namespace std;
int main()
{
	int tab[] = { 3,5,1,4,6,7 };
	for (int i = 0; i < sizeof tab / sizeof(int); i++)
	{
		cout << tab[i] << endl;
	}
	return 0;
}