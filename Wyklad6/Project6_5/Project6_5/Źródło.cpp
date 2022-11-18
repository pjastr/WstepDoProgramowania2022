#include <iostream>

using namespace std;

int main() {
	int i = 1, j = 2;
	cout << (i > j ? i : j) << " is greater." << endl;
	int m = i > j ? i : j;
	cout << m << endl;
	int t;
	if (i > j)
	{
		t = i;
	}
	else
	{
		t = j;
	}
	cout << t;
}