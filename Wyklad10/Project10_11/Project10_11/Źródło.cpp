#include <iostream>

using namespace std;

int minimum(int tab[], int n);
int minimum2(int tab[4]);
int maksimum(int tab[], int n);

int main() {
	int tab[] = { 3,4,-6,-9 };
	cout << maksimum(tab, 4) << endl;
	int tab2[] = { 3,4,-6,-9,11,-32 };
	cout << maksimum(tab2, 6) << endl;
	return 0;
}

int minimum(int tab[], int n)
{
	int temp = tab[0];
	for (int i = 1; i < n; i++)
	{
		if (temp > tab[i])
		{
			temp = tab[i];
		}
	}
	return temp;
}

int maksimum(int tab[], int n)
{
	int temp = tab[0];
	for (int i = 1; i < n; i++)
	{
		if (temp < tab[i])
		{
			temp = tab[i];
		}
	}
	return temp;
}

int minimum2(int tab[4])
{
	int temp = tab[0];
	for (int i = 1; i < 4; i++)
	{
		if (temp > tab[i])
		{
			temp = tab[i];
		}
	}
	return temp;
}
