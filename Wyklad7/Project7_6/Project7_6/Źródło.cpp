#include <iostream>
using namespace std;
int main()
{
	int i = 0;
	while (i < 5)
	{
		i++;
		if (i == 2)
		{
			continue;
		}
		cout << i << endl;
	}
	return 0;
}