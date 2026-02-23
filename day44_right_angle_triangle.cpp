#include <iostream>
#include <cmath>   // for sqrt()
using namespace std;

int main() {
    float base, height, hypotenuse;

    cout << "Enter base: ";
    cin >> base;

    cout << "Enter height: ";
    cin >> height;

    // Formula
    hypotenuse = sqrt(base*base + height*height);

    cout << "Hypotenuse = " << hypotenuse;

    return 0;
}