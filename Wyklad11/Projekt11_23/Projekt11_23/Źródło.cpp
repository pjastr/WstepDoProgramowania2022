#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int> w1 = { 3,-4,5 };
	vector<int> w2 = { 3,2,9 };
	cout << "== " << (w1 == w2) << endl;
	cout << "> " << (w1 > w2) << endl;
	cout << ">= " << (w1 >= w2) << endl;
	cout << "< " << (w1 < w2) << endl;
	cout << "<= " << (w1 <= w2) << endl;
}