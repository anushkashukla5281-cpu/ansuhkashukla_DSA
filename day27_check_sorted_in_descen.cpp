#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size: ";
    cin >> n;

    int arr[n];
    cout << "Enter elements:\n";

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    bool sorted = true;

    for(int i = 0; i < n - 1; i++) {
        if(arr[i] < arr[i + 1]) {   // Changed condition
            sorted = false;
            break;
        }
    }

    if(sorted)
        cout << "Array is Sorted in Descending Order";
    else
        cout << "Array is NOT Sorted in Descending Order";

    return 0;
}