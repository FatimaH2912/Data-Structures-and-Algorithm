#include <iostream>
using namespace std;

int main() {

    //Array of 8 integers
    int numbers[8];

    // Read 8 integers
    for (int i = 0; i < 8; i++) {
        cout << "Enter the " << i + 1 << " integer:";
        cin >> numbers[i];
    }

    // Assume first element is both largest and smallest
    int largest = numbers[0];
    int smallest = numbers[0];

    int largestIndex = 0;
    int smallestIndex = 0;

    // Find largest and smallest
    for (int i = 1; i < 8; i++) {

        if (numbers[i] > largest) {
            largest = numbers[i];
            largestIndex = i;
        }

        if (numbers[i] < smallest) {
            smallest = numbers[i];
            smallestIndex = i;
        }
    }

    cout << "Largest value: " << largest << endl;
    cout << "Largest index: " << largestIndex << endl;

    cout << "Smallest value: " << smallest << endl;
    cout << "Smallest index: " << smallestIndex << endl;

    return 0;
}