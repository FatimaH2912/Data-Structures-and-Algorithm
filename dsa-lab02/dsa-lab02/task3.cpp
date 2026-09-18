#include <iostream>
using namespace std;

int main() {

    int sales[2][3];

    // Pointer to a row containing 3 integers
    int (*rowPtr)[3] = sales;

    // Read the values using pointer notation
    for (int r = 0; r < 2; r++) {
        for (int c = 0; c < 3; c++) {
            cout << "Enter sales for branch " << r + 1 << " and day " << c + 1 << ": ";
            cin >> *(*(rowPtr + r) + c);
        }
        cout << endl;
    }

    // Display the table
    cout << "Sales:" << endl;

    for (int r = 0; r < 2; r++) {
        for (int c = 0; c < 3; c++) {
            cout << *(*(rowPtr + r) + c) << " ";
        }
    }

    // Calculate each branch total
    for (int r = 0; r < 2; r++) {
        int total = 0;

        for (int c = 0; c < 3; c++) {
            total += *(*(rowPtr + r) + c);
        }
        cout << endl;
        cout << "Branch " << r + 1 << " total: " << total << endl;
    }

    // Calculate each day total
    for (int c = 0; c < 3; c++) {
        int total = 0;

        for (int r = 0; r < 2; r++) {
            total += *(*(rowPtr + r) + c);
        }

        cout << "Day " << c + 1 << " total: " << total << endl;
    }

    return 0;
}
