#include<bits/stdc++.h>
using namespace std;

int minTrioDegree(int n, vector<vector<int>> edges) {
 int graph[n+1][n+1];
 memset(graph,0, sizeof(graph));
 int degree[n+1];
 memset(degree,0, sizeof(degree));
 
 int ans = INT_MAX;
 for(int i = 0; i < edges.size(); i++) {
     int x = edges[i][0];
     int y = edges[i][1];
     graph[x][y]++;
     graph[y][x]++;
     degree[x]++;
     degree[y]++;
 }
 
 for(int i = 1; i <= n; i++) {
     for(int j = i+1; j <= n; j++) {
         for(int k = j+1; k <= n; k++) {
             if(graph[i][j] && graph[i][k] && graph[j][k]) {
                 ans = min(ans, degree[i]+degree[j]+degree[k] - 6);
             }
         }
     }
 }
 
 return ans == INT_MAX? -1 : ans;
}