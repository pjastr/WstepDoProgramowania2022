#include <iostream>
#include <vector>
using namespace std;
int main()
{
	vector<int> w1 = { -7,8,-11, 9 };
	vector<int> w2 = { -7,8,-11 };
	cout << "== " << (w1 == w2) << endl;
	cout << "> " << (w1 > w2) << endl;
	cout << ">= " << (w1 >= w2) << endl;
	cout << "< " << (w1 < w2) << endl;
	cout << "<= " << (w1 <= w2) << endl;
}