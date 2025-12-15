/*
Name: Ankit Singh
Internship: C/C++ Programming Intern – Cognifyz Technologies
Task: Task 1 – String Reversal
Description: Reverses a given string using two-pointer technique.
*/

#include <iostream>
#include <string>
using namespace std;

void stringReversal(string &str) {
    int i = 0;
    int j = str.length() - 1;

    while (i < j) {
        swap(str[i], str[j]);
        i++;
        j--;
    }
}

int main() {
    string str = "helloWorlld";

    cout << "String before reversal: " << str << endl;
    stringReversal(str);
    cout << "String after reversal: " << str << endl;

    return 0;
}
