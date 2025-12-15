/*
Name: Ankit Singh
Internship: C/C++ Programming Intern – Cognifyz Technologies
Task: Task 5 – File Copy
Description: Copies the contents of one file to another.
*/

#include <iostream>
#include <fstream>
using namespace std;

int main() {
    string sourceFile, destinationFile;
    char ch;

    cout << "Enter source file name: ";
    cin >> sourceFile;

    cout << "Enter destination file name: ";
    cin >> destinationFile;

    ifstream source(sourceFile);
    ofstream destination(destinationFile);

    if (!source.is_open()) {
        cout << "Error: Unable to open source file." << endl;
        return 1;
    }

    if (!destination.is_open()) {
        cout << "Error: Unable to open destination file." << endl;
        return 1;
    }

    while (source.get(ch)) {
        destination.put(ch);
    }

    source.close();
    destination.close();

    cout << "File copied successfully." << endl;
    return 0;
}
