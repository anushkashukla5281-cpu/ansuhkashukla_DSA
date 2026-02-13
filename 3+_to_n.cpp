#include <iostream>
using namespace std;

int main() 
{
    int n;
    double sum = 0.0;

    cout << "Enter value of n: ";
    cin >> n;

    for(int i = 1; i <= n; i++)
    {
        sum = sum + (1.0 / i);
    }

    cout << "Sum of series = " << sum;

    return 0;
}