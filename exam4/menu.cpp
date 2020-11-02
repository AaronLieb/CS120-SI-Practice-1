#include <iostream>

using namespace std;

int main() {

	cout << " --- MENU --- \n";
	cout << "A. HELLO WORLD\n";
	cout << "B. PIZZA CUTTER\n";
	
	cout << "Enter a letter: ";
	char input;
	cin >> input;



	if (input == 'A' || input == 'a') {
		cout << "Hello world!\n";
	} else if (input == 'B' || input == 'b') {
			cout << "You have 8 slices of pizza.\nHow many people do you want to split it with?: ";
			int people;
			cin >> people;
			if (people == 0) {
				cout << "You cannot split pizza among 0 people!\n";
			} else {
				double slicesPerPerson = 8.0 / people;
				cout << "Each person will get " << slicesPerPerson << " slice(s).\n";
			}
	} else {
		cout << "You entered a value that is not a case\n";
	}


	return 0;
}


