#include <iostream>
using namespace std;

// N
int power(int a, int n) {
	if(n==0) {
		return 1;
	}

	return a * power(a, n-1);
}

// Log N
int fastPower(int a, int n) {
	if(n==0) {
		return 1;
	}

	int subProb = fastPower(a, n/2);
	int subProbSq = subProb * subProb;

	if(n & 1) {
		return a * subProbSq;
	}

	return subProbSq;
}

int main() {
	cout << power(2, 4) << endl;
	cout << fastPower(2, 10) << endl;
}