#include <iostream>;
using namespace std;

void display(int arr[5]) {

}
int main() {

	//Array declaration
	int sales[5];

	//Pointer declaration
	int* p = sales;

	int total = 0;

	//Inputting the values
	for (int i = 0; i < 5; i++) {
		
		cout << "Enter the sale: ";
		cin >> *(p + i);
	}

	//Displaying the array values and counting the total
	cout << "Sales: ";
	for (int i = 0; i < 5; i++) {
		cout << *(p + i) << " ";
		total += *(p + i);
	}

	//Displaying the total
	cout << endl;
	cout << "Total: " << total << endl;

	//Resetting the total to 0
	total = 0;

	//Adding two to the third element
	*(p + 2) = *(p + 2) + 2;

	//Displaying the updated sales value
	cout << "Updated sales: ";
	for (int i = 0; i < 5; i++) {
		cout << *(p + i) << " ";
		total += *(p + i);
	}

	//Displaying the updated total
	cout << endl;
	cout << "Updated total: " << total << endl;


	return 0;
}