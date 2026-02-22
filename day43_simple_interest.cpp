#include <iostream>
using namespace std;

int main() {
    float principal, rate, time, simpleInterest;

    // Taking input
    cout << "Enter Principal amount: ";
    cin >> principal;

    cout << "Enter Rate of interest: ";
    cin >> rate;

    cout << "Enter Time (in years): ";
    cin >> time;

    // Calculating Simple Interest
    simpleInterest = (principal * rate * time) / 100;

    // Display result
    cout << "Simple Interest = " << simpleInterest << endl;

    return 0;
}