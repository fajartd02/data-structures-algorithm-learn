#include<bits/stdc++.h>
using namespace std;

bool comparison(int a, int b) {
    return a > b;
}

vector<int> sortingWithComparator(vector<int> a, bool flag){
    if(flag) {
        sort(a.begin(), a.end());
    } else {
        sort(a.begin(), a.end(), comparison);
    }
    
    return a;
}