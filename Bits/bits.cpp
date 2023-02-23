#include <iostream>
using namespace std;

/*		EXPLANATION
		i == position
		n == number
		v == value
*/

int getIthBit(int n, int i) {
	int mask = (1 << i);
	return (n & mask) > 0 ? 1 : 0;
}

void setIthBit(int &n, int i) {
	int mask = (1 << i);
	n = (n | mask);
}

void clearIthBit(int &n, int i) {
	int mask = ~(1 << i);
	n = (n & mask);
}

void updateIthBit(int &n, int i, int v) {
	clearIthBit(n, i); 
	int mask = (v << i); 
	n = (n | mask);
}

void clearLastIBits(int &n, int i) {
	// ~0 == -1
	int mask = ~(0) << i;
	n = n & mask;
}

int main() {
	int n = 15;
	int i;
	cin >> i;

	// cout << getIthBit(n, i) << endl;
	// setIthBit(n, i);
	// clearIthBit(n, i);
	// updateIthBit(n, i, 1);
	clearLastIBits(n, i);
	cout << n << endl;

	return 0;
}