/*
Name: Ankit Singh
Internship: C/C++ Programming Intern – Cognifyz Technologies
Task: Task 2 – Calculator Program
Description: Performs basic arithmetic operations based on user input.
*/

#include <iostream>
using namespace std;

int main() {
    double a, b;
    char op;

    cout << "Enter first number: ";
    cin >> a;

    cout << "Enter operator (+, -, *, /, %): ";
    cin >> op;

    cout << "Enter second number: ";
    cin >> b;

    switch (op) {
        case '+':
            cout << "Result: " << a + b << endl;
            break;
        case '-':
            cout << "Result: " << a - b << endl;
            break;
        case '*':
            cout << "Result: " << a * b << endl;
            break;
        case '/':
            if (b == 0)
                cout << "Error: Division by zero" << endl;
            else
                cout << "Result: " << a / b << endl;
            break;
        case '%':
            cout << "Error: Modulus works only with integers" << endl;
            break;
        default:
            cout << "Invalid operator" << endl;
    }

    return 0;
}
