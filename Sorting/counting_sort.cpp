#include <iostream>
#include <algorithm>
using namespace std;

void counting_sort(int a[], int n) {
    int largest = -1;
    for(int i = 0; i < n; i++) {
        largest = max(largest, a[i]);
    }

    vector<int> freq(largest + 1, 0);

    for(int i = 0; i < n; i++) {
        freq[a[i]]++;
    }

    int index = 0;
    for(int i = 0; i <= largest; i++) {
        while(freq[i] > 0) {
            a[index] = i;
            freq[i]--;
            index++;
        }
    }


}

int main() {
    int arr[] = {10, 9, 8, 6, 5, 4, 3, 2, 11, 16, 8};
    int n = sizeof(arr) / sizeof(int);
    counting_sort(arr, n);
    
    for(int x : arr) {
        cout << x << " ";
    }

    return 0;
}