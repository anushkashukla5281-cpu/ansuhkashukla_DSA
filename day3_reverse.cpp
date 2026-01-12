#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n];

    //input array
    for (int i = 0 ; i < n ; i++) {
        cin >> arr[i];
    }
    int i = 0;
    int j = n-1;
    //reverse array 
    while (i < j) {
        int temp = arr[i];
        arr[i] = arr[i];
        arr[i] = arr[j];
        arr[j] = temp ;

        i++;
        j--;
    }
    //print reversed array 
    for(int i=0 ; i < n ; i++) {
        cout << arr[i] << " ";
    }

    return 0 ;
}
