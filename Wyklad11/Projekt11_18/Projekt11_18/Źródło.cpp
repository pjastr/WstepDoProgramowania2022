#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int> w1 = { 3,4,5,-2,3 };
	cout << w1.empty() << endl; //czy jest puste
	cout << w1.size() << endl; //rozmiar
	cout << w1.max_size() << endl; // maksymalny rozmiar
	cout << w1.capacity() << endl; //pojemnoœæ
}