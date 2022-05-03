#include <bits/stdc++.h>
using namespace std;

// BruteForce O(N^3)
int largestSubArraySumBruteForce(int arr[], int n) {
    int sum = INT_MIN;
    for(int i = 0; i < n; i++) {
        for(int j = i; j < n; j++) {
            int currentSum = 0;
            for(int k = i; k <= j; k++) {
                currentSum += arr[k];
            }

            if(currentSum > sum) sum = currentSum;
        }
    }
    return sum;
}

// PrefixSum Approach O(N + N^2) = O(N^2)
int prefixSumApproach(int arr[], int n) {

    // prefix sums
    int prefix[n + 1] = {0};
    prefix[0] = 0;
    for(int i = 1; i <n; i++) {
        prefix[i] = prefix[i-1] + arr[i];
    }

    int sum = INT_MIN;
    for(int i = 0; i < n; i++) {
        for(int j = i; j < n; j++) {
            int currentSum = i > 0 ? prefix[j] - prefix[i - 1] : prefix[j];
            sum = max(currentSum, sum);
        }
    }
    return sum;
}

// Kadane Algorithm O(N)
int maxSubArraySumKadane(int arr[], int n) {
    int cs = 0;
    int largest = 0;

    for(int i = 0; i < n; i++) {
        cs = cs + arr[i];
        if(cs < 0) {
            cs = 0;
        }
        largest = max(largest, cs);
    }

    return largest;
}

int main() {
    int arr[] = {1, 2, 3, 4};
    int n = sizeof(arr) / sizeof(int);
    cout << largestSubArraySumBruteForce(arr, n) << endl ;
    cout << prefixSumApproach(arr, n) << endl;
    cout << maxSubArraySumKadane(arr, n);
}