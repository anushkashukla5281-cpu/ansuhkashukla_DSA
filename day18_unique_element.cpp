#include <iostream>
#include <unordered_map> //wroks like a hash table keu - value 
using namespace std;

int main () {
    int n;
    cin >> n;

    int arr[n];

unordered_map<int , int> freq;    // this shoes us the count how many times it appeared .

// input array and count frequency 
for (int i = 0 ; i < n ; i++){
    cin >> arr[i];
    freq[arr[i]]++; // increament 
}

// find first unique element 
for(int i = 0 ; i < n; i++){
    if (freq[arr[i]] == 1){
        cout << arr[i];
        return 0;
    }
}
//if no unique elements found 
cout << -1 ;
return 0 ;
}