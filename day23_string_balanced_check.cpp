#include <iostream>
using namespace std;

int main() {
    string s;
    char arr[100];
    int top = -1;

    cout << "Enter the string: ";
    cin >> s;

    for (int i = 0; i < s.length(); i++) {
        char ch = s[i];

        // Push opening brackets
        if (ch == '(' || ch == '{' || ch == '[') {
            arr[++top] = ch;
        }
        // Handle closing brackets
        else {
            if (top == -1) {
                cout << "Not Balanced";
                return 0;
            }

            char last = arr[top--];

            if ((ch == ')' && last != '(') ||
                (ch == '}' && last != '{') ||
                (ch == ']' && last != '[')) {
                cout << "Not Balanced";
                return 0;
            }
        }
    }

    // Final check
    if (top == -1)
        cout << "Balanced";
    else
        cout << "Not Balanced";

    return 0;
}