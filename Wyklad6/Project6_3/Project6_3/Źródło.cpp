#include <iostream>

using namespace std;

int main() {
	double a = 1.1;
	double b = 0.1;
	if (-0.001 < (a+b)-1.2 && (a + b) - 1.2 < 0.001)
	{
		cout << "Prawda" << endl;
	}
	else
	{
		cout << "Falsz" << endl;
	}
}