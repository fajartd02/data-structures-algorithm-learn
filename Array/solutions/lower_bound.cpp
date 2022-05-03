#include<bits/stdc++.h>
using namespace std;


int lowerBound(vector<int> A, int Val) {
   int left = 0;
   int right = A.size() - 1;
   int ans = -1;
   while(left <= right) {
       int mid = (left + right) / 2;
       if(A[mid] == Val) return A[mid];
       else if(A[mid] > Val) right = mid - 1;
       else {
            ans = A[mid];
            left = mid + 1;
       }
   }
   
   return ans;
}