#include <bits/stdc++.h>
using namespace std;

void counting_sort(int a[], int n) {
    map<int, int> mp;
    for(int i = 0; i < n; i++) {
        mp[a[i]]++;
    }

    int index = 0;
    for(auto x: mp) {
        int len = x.second;
        while(len > 0) {
            a[index] = x.first;
            len--;
            index++;
        }
    }

}

int main() {
    int arr[] = {10, 9, 8, 8, 3,6, 5, 4, 3, 2, -11, 16, -8};
    int n = sizeof(arr) / sizeof(int);
    counting_sort(arr, n);
    
    for(int x : arr) {
        cout << x << " ";
    }

    return 0;
}