#include <iostream>

using namespace std;

int main() {
	int favorite_number;
	string food1, food2, food3, full_name;

	cout << "Enter your favorite number: ";
	cin >> favorite_number;

	cout << "Enter your three favorite foods: ";
	cin >> food1 >> food2 >> food3;
	
	cout << "Enter your full name: ";
	cin.ignore(); // needed if you have a previous input ending with a new line
	getline(cin, full_name);

	// outputting information
	string line;
	line.assign(40, '=');
	cout << "\n" << line << "\n";
	cout << "Your name is " << full_name << ".\n";	
	cout << "Your favorite foods are "
		 << food1 << ", "
		 << food2 << ", and "
		 << food3 << ".\n";
	cout << "Your favorite number is " << favorite_number << ".\n";

	return 0;
}
