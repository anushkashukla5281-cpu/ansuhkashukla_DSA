#include <iostream>
using namespace std;

int main() {
int n;
cin >> n ;
//size of array

int arr[n] ;
//array declaration 

//taking array input 
for (int i = 0 ; i < n; i++ ) {
    cin >> arr[i];
}
int count = 0;
// to count even no.
//checking each element 
for (int i = 0 ; i < n ; i++ ) {
    if ( arr[i] % 2 == 0) {
        // even condition 
        count++;
    }
}

cout << count ;

// printing result 
return 0 ;






































}
