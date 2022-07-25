#include<bits/stdc++.h>
using namespace std;
 
 vector<int> WavePrint(int m, int n, vector<vector<int>> arr)
{
    vector<int> res;
    int startCol = m-1;
    int startRow = 0;
    int endRow = n-1;
    
    while(true) {
        if(startCol < 0) break;
        
        for(int row = startRow; row <= endRow; row++) {
            res.push_back(arr[row][startCol]);
        }
        startCol--;
        if(startCol < 0) break;
        for(int row = endRow; row >= startRow; row--) {
            res.push_back(arr[row][startCol]);
        }
        startCol--;
        if(startCol < 0) break;
    }
    return res;
}
