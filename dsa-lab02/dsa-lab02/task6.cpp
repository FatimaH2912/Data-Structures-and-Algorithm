#include <iostream>
using namespace std;

int main() {
    int n = 3;

    // Allocate memory for 3 integers
    int* values = new int[n];

    // Read exactly 3 integers
    for (int i = 0; i < n; i++) {
        cout << "Enter the integer: ";
        cin >> values[i];
    }

    // Display the three integers
    cout << "Values: ";

    for (int i = 0; i < n; i++) {
        cout << values[i] << " ";
    }

    cout << endl;

    // Release the array correctly
    delete[] values;

    // Reset the pointer
    values = nullptr;

    return 0;
}