#include <iostream>
#define ROZMIAR 3
using namespace std;
int main()
{
	int tab[ROZMIAR] = { 3,-4,3 };
	cout << tab[-1] << endl;
	cout << tab[ROZMIAR] << endl;
	return 0;
}