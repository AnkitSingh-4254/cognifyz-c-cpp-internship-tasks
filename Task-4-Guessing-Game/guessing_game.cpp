/*
Name: Ankit Singh
Internship: C/C++ Programming Intern – Cognifyz Technologies
Task: Task 4 – Guessing Game
Description: A simple number guessing game where the user guesses a randomly generated number.
*/

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int secretNumber, guess;

    srand(time(0));                  // seed random generator
    secretNumber = rand() % 100 + 1;  // number between 1 and 100

    cout << "Guess the number (1 to 100)" << endl;

    do {
        cout << "Enter your guess: ";
        cin >> guess;

        if (guess > secretNumber) {
            cout << "Too high!" << endl;
        } else if (guess < secretNumber) {
            cout << "Too low!" << endl;
        } else {
            cout << "Correct! You guessed the number." << endl;
        }
    } while (guess != secretNumber);

    return 0;
}
