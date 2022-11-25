#include <iostream>
using namespace std;
int main()
{
	int i = 0;
	while (i < 5)
	{
		cout << i << endl;
		if (i > 2)
		{
			break;
		}i++;
	}
	cout << "po: " << i << endl;
	return 0;
}