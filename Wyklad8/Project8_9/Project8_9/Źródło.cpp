#include <iostream>

using namespace std;
void print(int i) {
	cout << "int:" << i << endl;
}
void print(double f) {
	cout << "float:" << f << endl;
}
void print(char c) {
	cout << "char:" << c << endl;
}

int main() {
	print(10);
	print(10.10);
	print('t');
	return 0;
}