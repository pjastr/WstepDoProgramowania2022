#include <iostream>

using namespace std;
int suma(int a, int b =3, int c=5, int d = 2)
{
	return a + b + c + d;
}
int main()
{
	cout << suma(3, 4) << endl;
	cout << suma(1, 2, 3) << endl;
	return 0;
}