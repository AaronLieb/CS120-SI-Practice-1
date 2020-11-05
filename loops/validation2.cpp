#include <iostream>

using namespace std;

int main() {
	
	int number;
	cout << "Enter number: ";
	cin >> number;

	int tries = 0;
	while (!(year >= 1970 && year <= 2020)) {
		cout << "Enter number: ";
		cin >> number;
		tries++;
		if (tries > 3) break;
	}

	cout << "The year you entered is " << year << ".\nThe code will not get here unless the year is in the range provided.\n";

	return 0;
}
