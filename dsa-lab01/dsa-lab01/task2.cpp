#include <iostream>
using namespace std;

int main() {

    //AN empty array of five elements
    int numbers[5];

    // Total variable
    int total = 0;

    // Read five integers
    for (int i = 0; i < 5; i++) {
        cout << "Enter the " << i + 1<< " number: "; 
        cin >> numbers[i];
    }

    // Add all elements
    for (int i = 0; i < 5; i++) {
        total = total + numbers[i];
    }

    cout << "Total = " << total << endl;

    return 0;
}