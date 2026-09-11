#include <iostream>
using namespace std;

int main() {

    //Integer array
    int numbers[10];

    //For loop to enter the integers
    for (int i = 0; i < 10; i++) {
        cout << "Enter the " << i + 1 << " integer: ";
        cin >> numbers[i];
    }

    int count = 0;

    // Check each element
    for (int i = 0; i < 10; i++) {

        bool found = false;

        // Check whether this value already exists among the unique values
        for (int j = 0; j < count; j++) {
            if (numbers[i] == numbers[j]) {
                found = true;
                break;
            }
        }

        // If value is not already present move it to the next unique position
        if (!found) {
            numbers[count] = numbers[i];
            count++;
        }
    }

    for (int i = 0; i < count; i++) {
        cout << numbers[i] << " ";
    }

    cout << endl;
    cout << "Count: " << count << endl;

    return 0;
}