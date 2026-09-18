#include <iostream>
using namespace std;

int main() {

    int n;

    cout << "Enter number of students: ";
    cin >> n;

    // Validate n before allocating memory
    if (n < 1) {
        cout << "Error; no allocation or mark input" << endl;
        return 0;
    }

    // Allocate memory for n marks
    int* marks = new int[n];

    // Read marks using pointer notation
    for (int i = 0; i < n; i++) {
        cout << "Enter marks for student "<< i+1 <<": ";
        cin >> *(marks + i);
    }

    int total = 0;
    int passCount = 0;

    // Display marks and calculate total and pass count
    cout << "Marks: ";

    for (int i = 0; i < n; i++) {
        cout << *(marks + i) << " ";

        total += *(marks + i);

        if (*(marks + i) >= 50) {
            passCount++;
        }
    }

    // Use double so the average keeps its fractional part
    double average = (double)total / n;

    cout << endl;
    cout << "Total: " << total << endl;
    cout << "Average: " << average << endl;
    cout << "Pass count: " << passCount << endl;

    // Release the dynamically allocated array
    delete[] marks;

    // Reset the pointer
    marks = nullptr;

	return 0;
}