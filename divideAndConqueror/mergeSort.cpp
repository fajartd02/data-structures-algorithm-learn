#include <bits/stdc++.h>
using namespace std;

void merge (vector<int> &array, int s, int e) {

	int left = s;
	int mid = (s+e)/2;
	int right = mid + 1;

	vector<int> temp;

	while(left <= mid and right <= e) {
		if(array[left] < array[right]) {
			temp.push_back(array[left]);
			left++;
		} else {
			temp.push_back(array[right]);
			right++;
		}
	}

	while(left <= mid) {
		temp.push_back(array[left++]);
	}

	while(right <= e) {
		temp.push_back(array[right++]);
	}

	int k = 0;
	for(int index = s; index <= e; index++) {
		array[index] = temp[k++];
	}
	return;
}

void mergesort(vector<int> &array, int s, int e) {
	// base case
	if(s >= e) return;

	// recursion case
	int mid = (s+e)/2;
	mergesort(array, s, mid);
	mergesort(array, mid+1, e);
	merge(array, s, e);
	return;
}

int main() {

	vector<int> arr{10, 5, 2, 0, 7, 6, 4};
	int s = 0;
	int e = arr.size() - 1;
	mergesort(arr, s, e);
	for(int x : arr) {
		cout << x << ", ";
	}

	cout << endl;

}