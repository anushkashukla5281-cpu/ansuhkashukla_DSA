#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;   // number of elements

    vector<int> arr(n);
    for(int i = 0; i < n; i++) {
        cin >> arr[i];   // input array (only 0s and 1s)
    }

    // This map stores:
    // prefixSum -> first index where this prefixSum appeared
    unordered_map<int, int> mp;

    int prefixSum = 0;   // running sum
    int maxLen = 0;      // answer: maximum length subarray

    // VERY IMPORTANT BASE CASE
    // If prefixSum becomes 0 at index i,
    // then subarray length = i - (-1) = i + 1
    mp[0] = -1;

    for(int i = 0; i < n; i++) {

        // Treat 0 as -1 and 1 as +1
        if(arr[i] == 0)
            prefixSum -= 1;
        else
            prefixSum += 1;

        // If this prefixSum was seen before,
        // then elements between the two indices have equal 0s and 1s
        if(mp.find(prefixSum) != mp.end()) {

            // length of subarray = current index - first occurrence index
            int length = i - mp[prefixSum];

            // update maximum length
            maxLen = max(maxLen, length);
        }
        else {
            // store the first occurrence of this prefixSum
            mp[prefixSum] = i;
        }
    }

    // print the result
    cout << maxLen;

    return 0;
}
