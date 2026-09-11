#include <iostream>
using namespace std;

// Class
class Student {
    public:
        //Integer variables
        int rollNumber;
        int marks;

        // Method to print the student data
        void display() {
            cout << "Roll Number: " << rollNumber << endl;
            cout << "Marks: " << marks << endl;
        }
};

int main() {

    // Creating two objects
    Student s1;
    Student s2;

    // Assign values
    s1.rollNumber = 1;
    s1.marks = 75;

    s2.rollNumber = 2;
    s2.marks = 90;

    // Display initial values
    cout << "Student 1:" << endl;
    s1.display();

    cout << endl;

    cout << "Student 2:" << endl;
    s2.display();

    // Change only s1 marks
    s1.marks = 80;

    cout << endl;
    cout << "After changing s1.marks to 80:" << endl;

    cout << "Student 1:" << endl;
    s1.display();

    cout << endl;

    cout << "Student 2:" << endl;
    s2.display();

    return 0;
}