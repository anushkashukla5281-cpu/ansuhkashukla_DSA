#include <iostream>
#include <cmath>
using namespace std;

int main () {
    int n , temp , digits = 0 , sum =0, rem;
    cout <<"enter a number ";
    cin >> n;

    temp = n;

    // count digits 
while (temp > 0){
    digits++;
    temp /= 10;

}
temp = n;

//calculate armstrong sum

while (temp > 0){
    rem = temp % 10;
    sum += pow(rem,digits);
    temp /= 10;



}

if (sum == n)
cout << "armstrong number";
else
cout << "not an armstrong number";
return 0 ;
}