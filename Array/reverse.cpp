#include <bits/stdc++.h>
using namespace std;

void reverse(vector<int> &arr, int l, int r) {
    while(l < r) {
        swap(arr[l], arr[r]);
        l++, r--;
    }
}

int main() {
    vector<int> arr = {1, 2, 3, 4};
    for(auto x : arr) {
        cout << x << " ";
    }
    cout << endl;
    reverse(arr, 0, arr.size() - 1);
    for(auto x : arr) {
        cout << x << " ";
    }
}