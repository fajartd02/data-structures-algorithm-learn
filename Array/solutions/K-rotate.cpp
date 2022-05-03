#include<bits/stdc++.h>
using namespace std;


void reverse(vector<int> &arr, int l, int r) {
    while(l < r) {
        swap(arr[l], arr[r]);
        l++, r--;
    }
}

vector<int> kRotate(vector<int> a, int k){
    int n = k % a.size();
    reverse(a, 0, a.size()-1);
    reverse(a, 0, n - 1);
    reverse(a, n, a.size()-1);
    return a;
}