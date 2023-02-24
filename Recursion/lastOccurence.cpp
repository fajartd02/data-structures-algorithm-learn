#include <iostream>
using namespace std;

int lastOccurenceMyVersion(int arr[], int key, int index) {
	if(index < 0) return -1;
	if(arr[index] == key) return index;
	int countIndex = lastOccurenceMyVersion(arr, key, index-1);
	return countIndex;
}

int lastOccurence(int arr[], int n, int key) {
	if(n == 0) return -1;
	int subIndex = lastOccurence(arr+1, n-1, key);
	if(subIndex == -1) {
		if(arr[0] == key) {
			return 0;
		} else {
			return -1;
		}
	} else {
		return subIndex + 1;
	}
}

int main() {

	int arr[] = {1, 2, 7, 6, 7, 3, 3, 7, 5};
	int key = 7;
	int index = sizeof(arr)/sizeof(arr[0]);
	cout << lastOccurence(arr, index-1, key) << endl;
	cout << lastOccurenceMyVersion(arr, key, index - 1) << endl;
}