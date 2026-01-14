#include <iostream>
using namespace std;

int main () {
int n ;
cin >> n;

int arr[n];
for (int i = 0 ; i < n; i++) {
    cin >> arr[i];
}

int i = 0 ; 
// pointer for unique elements 

for (int j = 1 ; j < n ; j++) {
    if (arr[j] != arr[i]) {
        i++;
        arr[i]  = arr[j];
    }
}
// number of unique elements 
int uniqueCount = i + 1 ;

cout  << uniqueCount << endl ;

// print array after removing duplicates 
for (int k =0 ; k < uniqueCount ; k++ ) {
    cout << arr[k] << " ";
}



return 0 ; 

}