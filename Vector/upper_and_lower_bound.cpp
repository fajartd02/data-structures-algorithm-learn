#include <bits/stdc++.h>
using namespace std;

int main() {

	vector<int> v = { 1, 3, 3, 5, 7 };

	cout << "Upper Bound: \n";
	// greater than key
	auto it = upper_bound(v.begin(), v.end(), 3);
	cout << it - v.begin() << endl; // index
	cout << *it << endl; // hasil

	cout << "=====================\n";

	cout << "Lower Bound: \n";
	// equal to or greater than key
	auto it2 = lower_bound(v.begin(), v.end(), 3);
	cout << it2 - v.begin() << endl; // index
	cout << *it2 << endl; // hasil

	return 0;
}