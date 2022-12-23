#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int> w1 = { 3,-4,5 };
	w1.resize(12);
	cout << w1.size() << endl;
	cout << w1.capacity() << endl;
	cout << "---" << endl;
	w1.resize(5);
	cout << w1.size() << endl;
	cout << w1.capacity() << endl;
	cout << "---" << endl;
	w1.shrink_to_fit();
	cout << w1.size() << endl;
	cout << w1.capacity() << endl;
	cout << "---" << endl;
}