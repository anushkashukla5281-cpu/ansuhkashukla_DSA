#include <iostream>
#include <vector> // a vector is a dynamic array its size can grow and shrink 
using namespace std;


void movezeros (vector<int>& arr )
// now that we're using & refrence the original vlaue will change here 
 {
    int j = 0 ; 
    for (int i = 0 ; i <  arr.size() ; i++) // array run till last element arr.size 
    {
        if (arr[i] != 0) { 
            swap(arr[i] , arr[j]);
            j++;
        }
    }
}
int main () {
    int n ; 
    cin >> n ;
    vector<int> arr(n);

    for (int i = 0 ; i < n ; i++ ) {
        cin >> arr[i];//taking array input 
    }
movezeros(arr);
for (int i = 0 ; i < n ; i++ ) {
    cout << arr[i] << " " ;
}

return 0 ; 
}