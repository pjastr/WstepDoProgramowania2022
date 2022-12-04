#include <iostream>
using namespace std;

void zamiana(int x, int y)
{
	x++;
	y--;

}

int main()
{
	int x = 2, y = 3;
	zamiana(x, y);
	cout << "x=" << x << endl;
	cout << "y=" << y << endl;
	return 0;
}