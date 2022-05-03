#include <bits/stdc++.h>

using namespace std;

int binarySearch(int arr[], int n, int target) {
    int right = n - 1;
    int left = 0;
    while(left <= right) { 
        int mid = (left+right)/2;
        if(arr[mid] == target) {
            return mid;
        } else if(arr[mid] > target) {
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }

    return -1;
}

int main() {
    int arr[] = {1, 2, 10, 11, 19, 29, 30};
    int n = sizeof(arr) / sizeof(int);
    cout << binarySearch(arr, n, 19);

    return 0;
}