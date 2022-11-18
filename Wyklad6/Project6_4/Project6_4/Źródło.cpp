#include <iostream>
using namespace std;
int main()
{
	int liczba;
	cout << "Podaj liczbe: ";
	cin >> liczba;
	switch (liczba)
	{
	case 2:
		cout << "dwa" << endl;
		break;
	case 1:
		cout << "jeden" << endl;
		break;
	default:
		cout << "ani jeden, ani dwa" << endl;
		break;
	}
	return 0;
}