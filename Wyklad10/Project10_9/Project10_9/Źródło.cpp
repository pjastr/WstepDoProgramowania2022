#include <iostream>
#define ROZMIAR 3
using namespace std;
int main()
{
	int tab[ROZMIAR] = { 3,-4,3 };
	for (int i = 0; i < ROZMIAR; i++)
	{
		cout << tab[i] << endl;
	}
	return 0;
}