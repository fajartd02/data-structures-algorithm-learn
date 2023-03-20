#include<bits/stdc++.h>
using namespace std;

int maximalNetworkRank(int n, vector<vector<int>> roads) {
    vector<int> relation(n);
    vector<vector<int>> adjMatrix(n, vector<int>(n, 0));
    
    for(int i = 0; i < roads.size(); i++) {
        int x = roads[i][0];
        int y = roads[i][1];
        relation[x]++;
        relation[y]++;
        adjMatrix[x][y]++;
        adjMatrix[y][x]++;
    }
    
    int result = 0;
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            result = max(result, relation[i] + relation[j] - adjMatrix[i][j]);
        }
    }
    
    return result;
}