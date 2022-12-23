#include <iostream>
#include <vector>

using namespace std;

void zeruj(int tab[], int n);

int main()
{
	int tab[] = { 2,3,-3,4 };
	zeruj(tab, 4);
	for (int i = 0; i < 4; i++)
	{
		cout << tab[i] << endl;
	}
}

void zeruj(int tab[], int n)
{
	for (int i = 0; i < n; i++)
	{
		tab[i] = 0;
	}
}