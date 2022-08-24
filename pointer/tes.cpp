#include <iostream>

using namespace std;

void ubah(int &a) {
	a = 100;
}

int main() {
	int a = 10;
	int &b = a;
	cout << a << endl;
	cout << b << endl;
	ubah(a);
	cout << a << endl;
	return 0;
}