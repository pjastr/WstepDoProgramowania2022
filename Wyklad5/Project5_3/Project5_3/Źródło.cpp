#include <iostream>


using namespace std;
int main()
{
	// przyklad negatywny
	int x = 3;
	int y = -6;
	x = y;
	y = x;
	cout << x << endl;
	cout << y << endl;
}