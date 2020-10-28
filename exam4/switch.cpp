#include <iostream>

using namespace std;

int main() {
	
	cout << "Enter a letter: ";
	char input;
	cin >> input;

	switch(input) {
		case 'A':
			cout << "You entered a capital A\n";
			break;
		case 'B':
			cout << "You entered a capital B\n";
			break;
		case 'C':
			cout << "You entered a capital C\n";
			break;
		default:
			cout << "You entered a value that is not a case\n";

	}

	return 0;
}


