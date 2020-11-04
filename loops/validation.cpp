#include <iostream>

using namespace std;

int main() {
	
	int year;
	cout << "Enter a year bewtween 1970 and 2020: ";
	cin >> year;

	while (!(year >= 1970 && year <= 2020)) {
		cout << "That input was invalid! Please try again: ";
		cin >> year; 
	}

	cout << "The year you entered is " << year << ".\nThe code will not get here unless the year is in the range provided.\n";

	return 0;
}
