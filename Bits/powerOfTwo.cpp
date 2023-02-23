#include <iostream>
using namespace std;

bool isPowerOfTwo(int n ) {
	return (n & (n-1)) == 0;
}

int main() {

	int n;
	cin >> n;
	if(isPowerOfTwo(n)) {
		cout << "Yes, power of 2\n";
	} else {
		cout << "No, not power of 2\n";
	}

	return 0;
}