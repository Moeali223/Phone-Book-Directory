#include <iostream>
#include <string>
using namespace std;

string names[] = { "Sarah Smith", "Bob Williams", "Jennifer Thompson" };
string phoneNumbers[] = { "555-1234", "555-4321", "555-5555" };

void changeNumber() {
    string name, number;
    cout << "Enter the name: ";
    getline(cin >> ws, name);
    cout << "Enter the new number: ";
    getline(cin, number);
    for (int i = 0; i < 3; i++) {
        if (names[i] == name) {
            phoneNumbers[i] = number;
            cout << "Number updated." << endl;
            return;
        }
    }
    cout << "Name not found." << endl;
}

void lookupNumber() {
    string name;
    cout << "Enter the name: ";
    getline(cin >> ws, name);
    for (int i = 0; i < 3; i++) {
        if (names[i] == name) {
            cout << "Phone Number: " << phoneNumbers[i] << endl;
            return;
        }
    }
    cout << "Name not found." << endl;
}

int main() {
    char choice;
    do {
        cout << "\nPhone Book Menu:\nL - Look up a number\nC - Change a number\nQ - Quit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        choice = toupper(choice);
        if (choice == 'L') lookupNumber();
        else if (choice == 'C') changeNumber();
    } while (choice != 'Q');
    return 0;
}
