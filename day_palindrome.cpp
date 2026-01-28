#include <iostream>
using namespace std;

int main () {

    int n , original , rev = 0 , digit ;

    cin >> n;

    original = n ;

    while(n > 0){
        digit = n % 10;

        rev = rev * 10 + digit ;

        n = n / 10;
    }

    if (rev== original)
    cout << "palindrome";
    
else
cout << " not a palindrome";

return 0;

}