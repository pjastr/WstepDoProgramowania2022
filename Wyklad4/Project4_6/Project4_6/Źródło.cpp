#include <iostream>
using namespace std;
int main()
{
	int x = 10;
	cout << "Przed:" << endl;
	cout << "x = " << x << endl;
	x = x++;
	cout << "Po:" << endl;
	cout << "x = " << x << endl;
	return 0;
}