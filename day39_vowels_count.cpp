#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    int count = 0;

    cout << "Enter a string: ";
    getline(cin, str);   // To take full sentence input

    for(int i = 0; i < str.length(); i++) {
        char ch = str[i];

        // Check for both uppercase and lowercase vowels
        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
           ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            count++;
        }
    }

    cout << "Number of vowels = " << count;

    return 0;
}