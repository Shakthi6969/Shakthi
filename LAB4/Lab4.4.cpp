#include <iostream>
#include <string>
using namespace std;

void runWithoutIgnore() {
    int age;
    string name;

    cout << "=== Test Without cin.ignore() ===" << endl;
    cout << "Enter age: ";
    cin >> age;

    cout << "Enter full name: ";
    getline(cin, name);

    cout << "Age: " << age << ", Name: " << name << endl << endl;
}

void runWithIgnore() {
    int age;
    string name;

    cout << "=== Test With cin.ignore() ===" << endl;
    cout << "Enter age: ";
    cin >> age;

    cin.ignore();

    cout << "Enter full name: ";
    getline(cin, name);

    cout << "Age: " << age << ", Name: " << name << endl;
}

int main() {
    runWithoutIgnore();
    runWithIgnore();

    cout << "\nResult Explanation:\n";
    cout << "In the first case, getline() reads leftover input, so name appears empty.\n";
    cout << "In the second case, cin.ignore() clears the buffer, so getline() works properly.\n";

    return 0;
}
