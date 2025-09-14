#include <bits/stdc++.h>
using namespace std;

bool checkPalindrome(string &str, int start, int end) {
    // base case
    if (start >= end) return true;
    if (str[start] != str[end]) return false;

    // recursive call
    return checkPalindrome(str, start + 1, end - 1);
}

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;

    if (checkPalindrome(str, 0, str.size() - 1)) {
        cout << "Palindrome" << endl;
    } else {
        cout << "Not a Palindrome" << endl;
    }

    return 0;
}

