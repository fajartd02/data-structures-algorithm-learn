#include <bits/stdc++.h>

using namespace std;

void reverseArray(int arr[], int n) {
    int left = 0;
    int right = n - 1;
    while(left < right) {
        // int temp = arr[left];
        // arr[left] = arr[right];
        // arr[right] = temp;
        swap(arr[left], arr[right]);
        left++; right--;
    }

}

int main() {
    int arr[] = {1, 2, 10, 11, 19, 29, 30};
    int n = sizeof(arr) / sizeof(int);
    reverseArray(arr, n);
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}