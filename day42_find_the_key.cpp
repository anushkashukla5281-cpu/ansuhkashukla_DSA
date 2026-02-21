#include <iostream>
using namespace std;

int main() 
{
    int key, number;

    cout << "Enter key: ";
    cin >> key;

    cout << "Enter number: ";
    cin >> number;

    if (number == key)
    {
        cout << "Key Found!";
    }
    else
    {
        cout << "Wrong Key!";
    }

    return 0;
}