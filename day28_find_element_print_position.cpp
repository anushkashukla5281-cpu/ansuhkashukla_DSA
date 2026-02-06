#include <iostream>
using namespace std;

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int key , i ;
    int found = 0 ;

    cout << "Enter the element to search: ";
    cin >> key ;


    for(i = 0 ; i < 5 ; i++) {
        if(arr[i] == key) {
            cout << "element found at position: " << i + 1 << endl;
            found = 1 ;  
            break ;
        }  

    }
    if(found == 0) {
        cout << "Element not found in the array" << endl;
    }
    return 0;
}