#include <iostream>
using namespace std;

int main()
{
    int n = 5;

    for(int i = 1; i <= n; i++)
    {
        // Print spaces
        for(int space = 1; space <= n - i; space++)
        {
            cout << " ";
        }

        // Print numbers
        for(int num = 1; num <= (2 * i - 1); num++)
        {
            cout << num;
        }

        cout << endl;
    }

    return 0;
}