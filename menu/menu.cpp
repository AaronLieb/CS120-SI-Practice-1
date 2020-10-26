#include <iostream>

using namespace std;

int main() {
	cout << "1. One\n" << "2. Two\n" << "3. Three\n" << "4. Four\n" << "5. Five\n";

	char menuChoice;

	cout << "Enter a menu choice: ";

	cin >> menuChoice;

	int num1, num2;

	if (!((menuChoice == '1') || )) {
		cout << "Invalid menu choice, try\n";
		return 0;
	}  

	//cout << "Enter left operand: ";
	//cin >> num1;

	//cout << "Enter right operand: ";
	//cin >> num2;

	if (menuChoice == '1') {
		cout << "num1 + num2 = " << num1 + num2 << "\n"
	} else if (menuChoice == '2') {
		// then do this
	} else if (menuChoice == '3') {
		// then do this
	} 

	return 0;
}
