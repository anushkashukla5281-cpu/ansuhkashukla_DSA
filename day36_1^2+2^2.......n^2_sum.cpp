#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter value of n: ";
    cin >> n;

    int sum = n * (n + 1) * (2 * n + 1) / 6;

    cout << "Sum of squares = " << sum;

    return 0;
}