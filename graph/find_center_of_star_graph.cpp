#include<bits/stdc++.h>
using namespace std;

int findCenter(vector<vector<int>>edges)
{
    vector<int> v(100001);
    set<int> s;
    
    int n = edges.size();
    
    for(int i = 0; i < n; i++) {
        int x = edges[i][0];
        int y = edges[i][1];
        s.insert(x);
        s.insert(y);
        v[x]++;
        v[y]++;
    }
    
    int totalNode = s.size();
    
    for(int i = 1; i < 100001; i++) {
        if(v[i] == totalNode - 1) return i;
    }
    
    return -1;
}