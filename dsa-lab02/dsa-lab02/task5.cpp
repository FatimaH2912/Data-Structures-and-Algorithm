#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter number of students: ";
    cin >> n;

    // Validate n before allocation
    if (n < 1 || n > 10) {
        cout << "Error; no allocation" << endl;
        return 0;
    }

    // Allocate the original array
    int* marks = new int[n];

    // Read the original marks
    for (int i = 0; i < n; i++) {
        cout << "Enter marks for student " << i + 1 << " :";
        cin >> *(marks + i);
    }

    // Allocate a new block with space for one more mark
    int* newMarks = new int[n + 1];

    // Copy the original values using pointer notation
    for (int i = 0; i < n; i++) {
        *(newMarks + i) = *(marks + i);
    }

    // Read the new student's mark into the final position
    cout << "Enter marks for new student: ";
    cin >> *(newMarks + n);

    // Release the old block
    delete[] marks;

    // Make marks point to the new block
    marks = newMarks;

    // Update the size
    n = n + 1;

    // Display all values
    cout << "Updated marks: ";

    for (int i = 0; i < n; i++) {
        cout << *(marks + i) << " ";
    }

    cout << endl;

    // Release the final block
    delete[] marks;

    // Reset the pointer
    marks = nullptr;

    return 0;
}