#include <iostream>
using namespace std;

void decrease(int n) {
	if(n == 0) return;

	cout << n << ", ";
	decrease(n-1);
	// cout << endl;
}

void increase(int n) {
	if (n==0) return;
	increase(n-1);
	cout << n << ", ";
}


int main() {

	int n = 5;
	decrease(n);
	cout << endl;
	increase(n);

	return 0;
}