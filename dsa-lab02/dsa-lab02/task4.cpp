#include <iostream>
using namespace std;

int main() {
    int rows, cols;

    cout << "Enter number of students: ";
    cin >> rows;

    cout << "Enter number of subjects: ";
    cin >> cols;

    // Validate rows and columns before allocation
    if (rows < 1 || rows > 10 || cols < 1 || cols > 10) {
        cout << "Error; no allocation" << endl;
        return 0;
    }

    // Allocate an array of row pointers
    int** marks = new int* [rows];

    // Allocate each row separately
    for (int r = 0; r < rows; r++) {
        marks[r] = new int[cols];
    }

    // Read the marks using pointer notation
    for (int r = 0; r < rows; r++) {
        for (int c = 0; c < cols; c++) {
            cout << "Enter marks for student " << r + 1 << " subject " << c + 1 << ": ";
            cin >> *(*(marks + r) + c);
        }
    }

    // Display the matrix
    for (int r = 0; r < rows; r++) {
        cout << "Marks for student " << r + 1 << ": ";
        for (int c = 0; c < cols; c++) {
            cout << *(*(marks + r) + c) << " ";
        }

        cout << endl;
    }

    // Calculate the first student's total
    int bestTotal = 0;

    for (int c = 0; c < cols; c++) {
        bestTotal += *(*(marks + 0) + c);
    }

    int bestStudent = 1;

    // Calculate the other students' totals
    for (int r = 1; r < rows; r++) {
        int total = 0;

        for (int c = 0; c < cols; c++) {
            total += *(*(marks + r) + c);
        }

        cout << "Student " << r + 1 << " total: " << total << endl;

        // Use > so the first student wins if totals are tied
        if (total > bestTotal) {
            bestTotal = total;
            bestStudent = r + 1;
        }
    }

    // Display first student's total as well
    cout << "Student 1 total: ";

    int studentOneTotal = 0;

    for (int c = 0; c < cols; c++) {
        studentOneTotal += *(*(marks + 0) + c);
    }

    cout << studentOneTotal << endl;

    cout << "Top student: " << bestStudent << endl;
    cout << "Highest total: " << bestTotal << endl;

    // Delete every row
    for (int r = 0; r < rows; r++) {
        delete[] marks[r];
    }

    // Delete the row-pointer array
    delete[] marks;

    // Reset the pointer
    marks = nullptr;

    return 0;
}