#include <iostream>


using namespace std;
int main()
{
	int x = 3;
	int y = -6;
	int temp = x;
	x = y;
	y = temp;
	cout << x << endl;
	cout << y << endl;
}