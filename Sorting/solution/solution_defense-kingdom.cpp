#include<bits/stdc++.h>
using namespace std;
#define all(v) v.begin(), v.end()

int defkin(int W, int H, vector<pair<int, int>> position)
{
    vector<int> x;
    vector<int> y;
    x.push_back(W + 1);
    y.push_back(H + 1);
    for(auto coordinate : position) {
        x.push_back(coordinate.first);
        y.push_back(coordinate.second);
    }
    sort(all(x));
    sort(all(y));
    int maxX = x[0] - 1;
    int maxY = y[0] - 1;
    
    for(int i = 0; i < x.size(); i++) {
        maxX = max(maxX, x[i + 1] - x[i] - 1);
    }
    for(int i = 0; i < y.size(); i++) {
        maxY = max(maxY, y[i + 1] - y[i] - 1);
    }
    
    cout << maxX * maxY << endl;
    return maxX * maxY;
    
}