#include <iostream>

using namespace std;

int main() {


	// recommended method of getting char input
	cout << "Input a letter: ";
	char input1;
	cin >> input1;
	cout << "Your input was: " << input1 << endl << endl;

	// Alternate method for getting char input
	cout << "Input a letter: ";
	cin.ignore(); // must include cin.ignore() if entering consecutive user input
	char input2 = cin.get();
	cout << "Your input was: " << input2 << endl;

	return 0;
}
