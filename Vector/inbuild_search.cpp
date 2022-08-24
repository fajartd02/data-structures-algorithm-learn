#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {

	vector <int> arr = {10, 11, 12, 3, 4, 1, 2};
	int key;
	cin >> key;

	// it -> return address
	vector<int>::iterator it = find(arr.begin(), arr.end(), key);
	
	if(it != arr.end()) {
		// key adress - base address = index
		cout << it - arr.begin() << endl;
	} else {
		cout << "Element doesnt found!" << endl;
	}
 
	return 0;
}