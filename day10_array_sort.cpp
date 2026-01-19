#include <iostream>
#include <vector> // allows us to use vector which is a dynamic array 
using namespace std;

bool isSorted(vector<int>& arr) // bool means that it will return true or false vector.... recives the array and & this is pass by refrence faster , no copy 
 {
    int n = arr.size();  // stores the size 

    for(int i = 1 ; i <n; i++){
        if(arr[i] < arr[i-1]) {// if current element < previos element , the order breaks it immediately returns false .
            return false;
        }
    }

    return true ;
}

int main (){
int n ;
cin >> n;

vector<int> arr(n); // creating a vector of size n
for(int i = 0 ; i < n ; i++){
    cin >> arr[i];
}

if (isSorted(arr)) // calls the fuction
cout << "true";
else
cout << "false";


return 0 ;
}