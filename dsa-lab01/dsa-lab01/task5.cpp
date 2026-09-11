#include <iostream>
using namespace std;

// Function to reverse array
void reverseArray(int numbers[], int start, int end) {
    
    // Base case
    if (start >= end) {
        return;
    }

    // Swap first and last elements
    int temp = numbers[start];
    numbers[start] = numbers[end];
    numbers[end] = temp;

    // Recursive call for the remaining elements
    reverseArray(numbers, start + 1, end - 1);
}

int main() {
   
    //Array of 6 integers
    int numbers[6];

    // For loop to enter the 6 integers
    for (int i = 0; i < 6; i++) {
        cout << "Enter the " << i + 1 << " integer: ";
        cin >> numbers[i];
    }

    // Reverse using recursion
    reverseArray(numbers, 0, 5);

    cout << "Reversed array:" << endl;

    for (int i = 0; i < 6; i++) {
        cout << numbers[i] << " ";
    }

    return 0;
}