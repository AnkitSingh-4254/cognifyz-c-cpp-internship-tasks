/*
Name: Ankit Singh
Internship: C/C++ Programming Intern – Cognifyz Technologies
Task: Task 3 – Fibonacci Series
Description: Generates the Fibonacci series up to a user-defined number of terms.
*/

#include <iostream>
using namespace std;

int main() {
    int n;
    long long first = 0, second = 1, next;

    cout << "Enter number of terms: ";
    cin >> n;

    if (n <= 0) {
        cout << "Please enter a positive number." << endl;
        return 0;
    }

    cout << "Fibonacci Series: ";

    for (int i = 1; i <= n; i++) {
        if (i == 1) {
            cout << first << " ";
        } else if (i == 2) {
            cout << second << " ";
        } else {
            next = first + second;
            cout << next << " ";
            first = second;
            second = next;
        }
    }

    cout << endl;
    return 0;
}
