#include <iostream>

using namespace std;

int main() {
	char znak = 'r';
	if (znak >= 'a' && znak <= 'z')
	{
		znak -= 'a' - 'A';
	}
	cout << znak << endl;
}