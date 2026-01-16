#include <iostream>
using namespace std;

int secondlargest (int arr[], int n ) {
    // if array has 0 or  1 element it is impossible to find the second largest so we directly return the -1 here 
    if(n < 2 )
    return -1 ; 
// -1e9 means -1,000,000,000

    int largest = -1e9;
    int secondlargest = -1e9;
//loop to go through each element so this can check 
    for (int i=0 ; i < n; i++ ) 

    //if arr[i] > largest then the old largest becomes the second largest 
        if (arr[i] > largest ) {
            secondlargest = largest ;
            largest = arr[i];
        }
        else if (arr[i] < largest && arr[i] > secondlargest) {
            secondlargest = arr[i];
        }

    if (secondlargest == -1e9)
    return -1 ;
return secondlargest ;

}
int main () {


int n ;
cin >> n; 
int arr[n];
for (int i = 0 ; i <n; i++) {
    cin >> arr [i];
}
cout << secondlargest(arr, n) ;
return 0 ; 

}