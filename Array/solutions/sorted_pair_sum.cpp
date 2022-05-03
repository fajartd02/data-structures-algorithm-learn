#include<bits/stdc++.h>
using namespace std;

pair<int, int> closestSum(vector<int> arr, int x){
    int left = 0;
    int right = arr.size() - 1;
    int res_left = left;
    int res_right = right;
    int different = INT_MAX;    
    
    while(left < right) {
        if(abs(arr[left] + arr[right] - x) < different) {
            res_left = left;
            res_right = right;
            different = abs(arr[left] + arr[right] - x);
        }
        
        if(arr[left] + arr[right] > x) {
            right--;
        } else {
            left++;
        }
    }
    
    return {arr[res_left], arr[res_right]};
}