#include <iostream>
using namespace std;
int a = 1; /* zmienna globalna */
int b = 3; /* zmienna globalna */

int main()
{
	int a = 2; /* to ju¿ zmienna lokalna */
	cout << a << endl;
	cout << b << endl;
}

