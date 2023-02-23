#include<iostream>
using namespace std;

// Fast Exponentation
/*
	formula:
	a^n = 3^5
	a = 3; it means -> a^5
	bits of 5 = 101
	change form 3^5 to 3^101
	1   0   1
	a^4 a^2 a^1
	so the power will be multiply square
	when ever the bits is 1, we multiply
	example:
	3^101
	= a^4 * a^1 
	= a^5
*/
int fastExpo(int a, int n) {
	int ans = 1;
	while(n > 0) {
		if((n&1) == 1) {
			ans *= a;
		}
		a = a * a;
		n = n >> 1;
	}
	return ans;
}

int main() {

	int a, n;
	cin >> a >> n;
	cout << fastExpo(a, n) << endl;

	return 0;
}