/*
Name: Ankit Singh
Internship: C/C++ Programming Intern – Cognifyz Technologies
Task: Task 10 – Simple Inventory Management System
Description: Allows users to add items, display items, and search items by ID.
*/

#include <iostream>
#include <string>
using namespace std;

struct Item {
    int id;
    string name;
    int quantity;
};

int main() {
    Item inventory[100];
    int count = 0;
    int choice;

    do {
        cout << "\nInventory Menu\n";
        cout << "1. Add Item\n";
        cout << "2. Display Items\n";
        cout << "3. Search Item by ID\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) {
            cout << "Enter Item ID: ";
            cin >> inventory[count].id;
            cout << "Enter Item Name: ";
            cin >> inventory[count].name;
            cout << "Enter Quantity: ";
            cin >> inventory[count].quantity;
            count++;
        }
        else if (choice == 2) {
            if (count == 0) {
                cout << "Inventory is empty.\n";
            } else {
                for (int i = 0; i < count; i++) {
                    cout << "ID: " << inventory[i].id
                         << ", Name: " << inventory[i].name
                         << ", Quantity: " << inventory[i].quantity << endl;
                }
            }
        }
        else if (choice == 3) {
            int searchId;
            cout << "Enter Item ID to search: ";
            cin >> searchId;
            bool found = false;

            for (int i = 0; i < count; i++) {
                if (inventory[i].id == searchId) {
                    cout << "Item Found -> Name: " << inventory[i].name
                         << ", Quantity: " << inventory[i].quantity << endl;
                    found = true;
                    break;
                }
            }

            if (!found) {
                cout << "Item not found.\n";
            }
        }

    } while (choice != 4);

    return 0;
}
