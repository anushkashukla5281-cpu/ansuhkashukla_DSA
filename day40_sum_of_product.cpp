#include <iostream>
using namespace std;

int main() {
    int a = 2, b = 10;
    int sum = a + b; // 2 + 10 = 12
    int digitSum = 0;

    while (sum > 0) {
        digitSum += sum % 10; // add last digit
        sum /= 10;            // remove last digit
    }

    cout << "Answer is: " << digitSum;
    return 0;
}