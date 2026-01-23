#include <bits/stdc++.h>
using namespace std;

int main (){
    int n ;
    cin >> n;

    vector<int>arr(n);
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int count = 0;
    for(int i = 0 ; i < n ; i++) {
        if(arr[i] > arr[(i+1) % n]){ // compare current element with next element % n makes last element compare with first
            count++; // if order breaks increase count 
        }
    }

    if(count <= 1)
    cout << "true";
    else
    cout <<"false";

    return 0;
}
