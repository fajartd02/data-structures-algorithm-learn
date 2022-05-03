#include<bits/stdc++.h>
using namespace std;

int largestElement(vector<int> arr) {
    int big = INT_MIN;
    for(int i = 0; i < arr.size(); i++) {
        if(arr[i] > big) {
            big = arr[i];
        }
    }
    
    return big;
}