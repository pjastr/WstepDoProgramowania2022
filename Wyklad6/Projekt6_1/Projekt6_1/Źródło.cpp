#include <iostream>

using namespace std;

int main()
{
	int a;
	int b;
	cin >> a;
	cin >> b;
	if (a == 0 && b == 0)
	{
		cout << "Nieskonczenie wiele rozwiazan" << endl;
	}
	else if (a == 0)
	{
		cout << "Brak rozw." << endl;
	}
	else
	{
		cout << -b / float(a) << endl;
	}
}