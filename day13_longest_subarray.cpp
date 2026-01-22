#include <bits/stdc++.h>
using namespace std;

int main () {
    int n , k ;
    cin >> n >> k;
    vector<int>arr(n);
    for(int i = 0; i < n ; i++){
        cin >> arr[i];
    }

    int left = 0 , right = 0;
    int sum = 0 , maxLen = 0 ;

    while(right < n) {
        sum += arr[right];

        while(sum > k ) {
            sum -= arr[left];
            left++;
        }

        if(sum == k) {
            maxLen = max(maxLen , right - left + 1 );
        }

        right ++;
    }

    cout << maxLen ;

    return 0;
}