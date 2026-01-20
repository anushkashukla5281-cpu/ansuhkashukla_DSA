#include <iostream>
#include <vector>
using namespace std;

int findMissingNumber(vector<int>&arr,int n) // the fuction to find the missing 
 {
    int xor1=0 , xor2 = 0;

    // XOR of numbers from 1 to n 
    for(int i = 1 ; i <= n; i++) {
        xor1 ^=  i ;
    }

    //XOR of array elements
    for(int i = 0 ; i <n-1 ;i++)
    {
        xor2 ^= arr[i];
    }

    //missing number
    return xor1 ^ xor2;    // this line is very important xor1 ^ xor2 this way it will return the missing number because same will be 0 
}// (1^1) ^ (2^2) ^ (3^3) ^ (4^4) ^ (5^5) ^ 3 = 3  
//ok thats how it wroks  same = 0 , diffrent = 1 

int main (){
int n ;
cin >> n;

vector<int>arr(n-1); // creates an array of size n-1 because 1 number is missing
for(int i = 0 ; i < n-1 ; i++) {
    cin >> arr[i];
}
cout << findMissingNumber(arr , n); // calls the fuction prints the missing number 
return 0 ;
}