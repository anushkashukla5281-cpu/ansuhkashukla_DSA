#include <iostream>
using namespace std;

int main() {
int n ;
cin >> n;
// size of array 

int arr[n];

//taking array input

for(int i=0 ; i < n ; i++) {
    cin >> arr[i];
}

int largest = arr[0]; 
//assume first element is largest

//finding largest element
for(int i = 1 ; i < n; i++) {
    if(arr[i] > largest) {
        largest = arr[i] ;
    }
}
//output result 

cout << largest ;

return 0;
































}