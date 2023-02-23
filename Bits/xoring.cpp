#include<bits/stdc++.h>
using namespace std;

// xor can find to unique id

/*
	xor is commutative: A ^ B = B ^ A
	xor is associative: (A ^ B) ^ C = A ^ (B ^ C)
	xoring with zero does nothing: A ^ 0 = A
	xoring something twice removes it: A ^ A = 0
*/

int xoring(vector<int> v)
{
    int res = 0;
    for(auto x : v) {
        res = res ^ x;
    }
    return res;   
}