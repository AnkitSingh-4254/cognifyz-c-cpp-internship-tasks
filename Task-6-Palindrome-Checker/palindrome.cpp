/*
Name: Ankit Singh
Internship: C/C++ Programming Intern – Cognifyz Technologies
Task: Task 6 – Palindrome Checker
Description: Checks whether a given string is a palindrome.
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    string str, rev = "";

    cout << "Enter a word or phrase: ";
    getline(cin, str);

    for (int i = str.length() - 1; i >= 0; i--) {
        rev += str[i];
    }

    if (str == rev) {
        cout << "The string is a palindrome." << endl;
    } else {
        cout << "The string is not a palindrome." << endl;
    }

    return 0;
}
