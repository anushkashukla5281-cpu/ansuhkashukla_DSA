#include <bits/stdc++.h>
using namespace std;

int main () {
    int n , x ;
    cin >> n >> x;

    int arr[n];
    for(int i=0 ; i < n; i++)//takes input of each element
    cin >>arr[i];

    for(int i =0 ; i < n ; i++){  // check if current number is greater than the x if YES then print it 
        if(arr[i] >x)
        cout <<arr[i] << " " ;
    }

    return 0;
}