#include <iostream>
#include <cstring>
using namespace std;

struct Student {
    char name[50];
    int id;
    float grade;
};

const int MAX_STUDENTS = 100;
Student students[MAX_STUDENTS];
int studentCount = 0;

void addStudent() {
    if (studentCount >= MAX_STUDENTS) {
        cout << "No more, I'm full" << endl;
        return;
    }
    Student newStudent;
    cout << "Enter student name: ";
    cin.ignore();
    cin.getline(newStudent.name, 50);
    cout << "Enter student ID: ";
    cin >> newStudent.id;
    cout << "Enter student grade: ";
    cin >> newStudent.grade;

    students[studentCount++] = newStudent;
    cout << "Student added successfully!" << endl;
}

void displayAllStudents() {
    if (studentCount == 0) {
        cout << "No students to display." << endl;
        return;
    }
    cout << "Student Records:" << endl;
    for (int i = 0; i < studentCount; i++) {
        cout << "Name: " << students[i].name << ", ID: " << students[i].id << ", Grade: " << students[i].grade << endl;
    }
}

void searchStudentByID() {
    if (studentCount == 0) {
        cout << "No students to search." << endl;
        return;
    }
    int searchID;
    cout << "Enter student ID to search: ";
    cin >> searchID;

    for (int i = 0; i < studentCount; i++) {
        if (students[i].id == searchID) {
            cout << "Student Found: " << endl;
            cout << "Name: " << students[i].name << ", ID: " << students[i].id << ", Grade: " << students[i].grade << endl;
            return;
        }
    }
    cout << "Student with ID " << searchID << " not found." << endl;
}

int main() {
    int choice;
    do {
        cout << "\nStudent Management System" << endl;
        cout << "1. Add Student" << endl;
        cout << "2. Display All Students" << endl;
        cout << "3. Search Student by ID" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                addStudent();
                break;
            case 2:
                displayAllStudents();
                break;
            case 3:
                searchStudentByID();
                break;
            case 4:
                cout << "Exiting program. Goodbye!" << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 4);

    return 0;
}
