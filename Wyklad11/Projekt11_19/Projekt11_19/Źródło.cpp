#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int > vec;
	vec.push_back(1);
	vec.push_back(1);
	vec.push_back(1);
	cout << "size of vector" << vec.size() << endl;
	cout << "capacity of vector" << vec.capacity() << endl;
	return 0;
}