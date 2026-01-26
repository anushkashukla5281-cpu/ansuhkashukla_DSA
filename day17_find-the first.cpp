#include <bits/stdc++.h>
using namespace std;

int main () {
    int n ;
    cin >> n;

    vector<int> arr(n);
    for(int i = 0 ; i < n; i++)
    cin >> arr[i];


    unordered_set<int> s; // a set stores unique elements only 

    for(int i = 0 ; i < n ; i++) { // transverse array from left to right 
        if(s.count(arr[i])) {
            cout << arr[i];
            return 0;
        }
        s.insert(arr[i]); // store the elements in the set , remember it for the future checks 
    }


    cout << -1 ; 
    return 0;
}