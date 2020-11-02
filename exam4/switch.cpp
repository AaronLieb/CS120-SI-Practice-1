#include <iostream>
#include <cctype>

using namespace std;

int main() {
	
	cout << "Enter a letter: ";
	char input;
	cin >> input;

	//input = toupper(input);

	/*if (input == 'A') {
		cout << "Your number must be in the range 5-25!";
	}*/

	if (input != 'A' ... input != "") {
		cout << "Invalid input\n";
		return 0;
	}

	switch(input) {
		case 'A':
		case 'a': 
			cout << "You entered an A\n";
			break;
		case 'B':
			cout << "You entered a B\n";
			break;
		case 'C':
			cout << "You entered a C\n";
			break;
		default:
			cout << "You entered a value that is not a case\n";
	}

	return 0;
}


