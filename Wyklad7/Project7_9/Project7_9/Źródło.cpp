#include <iostream>
using namespace std;
int main()
{
	int a = 10;
	{ /* otwarcie lokalnego bloku */
		int b = 10;
		cout << a << " " << b << endl;
	} /* zamkniêcie lokalnego bloku */
	cout << a << " " << b << endl; /* B£¥D: b juz nie istnieje */
}