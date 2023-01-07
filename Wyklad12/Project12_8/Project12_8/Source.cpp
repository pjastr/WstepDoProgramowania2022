#include <iostream>

using namespace std;

int main()
{
	char znak = 'a';
	cout << znak << endl;
	cout << isalnum(znak) << endl;
	cout << toupper(znak) << endl;
	cout << char(toupper(znak)) << endl;
}