#include<bits/stdc++.h>
using namespace std;

int maxSumSubarray(vector<int> A) {
    int cs = 0;
    int largest = INT_MIN;
    int temp_largest = INT_MIN;
    bool negative = true;

    for(auto x: A) {
        if(x > 0) negative = false;
        if(x > temp_largest) temp_largest = x;
    }
    
    if(negative) return temp_largest;
    
    for(int i = 0; i < A.size(); i++) {
        cs = cs + A[i];
        if(cs < 0) {
            cs = 0;
        }
        
        largest = max(largest, cs);
    }
    
    return largest;
    
}