#include <bits/stdc++.h>
using namespace std;

pair<int, int> stairCaseSearch(int arr[][4], int n, int m, int key) {
	if(key < arr[0][0] || key > arr[n-1][m-1]) {
		return {-1, -1};
	}

	int j = m-1;
	int i = 0;

	while(i <= n-1 && j>=0) {
		if(arr[i][j] == key) {
			return {i, j};
		} else if(arr[i][j] > key) {
			j--;
		} else {
			i++;
		}
	}

	return {-1, -1};
}

int main() {
	int arr[][4] = {
		{10, 20, 30, 40},
		{15, 25, 35, 45},
		{27, 29, 37, 48},
		{32, 33, 39, 50}
	};

	int n = 4;
	int m = 4;

	pair <int, int> coordinate = stairCaseSearch(arr, n, m, 50);
	cout << coordinate.first << " " << coordinate.second;
	return 0;
}