#include <iostream>
using namespace std;

int main() {

	cout << "Welcome to the console input practice!\n";

	/* Lets start by getting the users name
	 * 1. Create a variable to store the name
	 * 2. Output a message asking for their name
	 * 3. Use cin to extract the user input
	 * 4. Print a welcome message using their name */

	/* Start code here */
	string name;
	cout << "Enter your name: ";
	cin >> name;
	cout << "What's up " << name << "\n";


	/* End code here */



	/* Now lets ask the user for their age
	 * Follow the previous steps to extract the input
	 * Print a message confirming their age */

	/* Start code here */
	int age;
	cout << "Enter your age: ";
	cin >> age;
	cout << "You are " << age << " years old\n";


	/* End code here */



	/* Finally, ask the user for their city and state
	 * Example: Fullerton, California
	 * Create two variables for city and state
	 * Use cin to extract both inputs in one line
	 * Print a message displaying all of the information collected thus far */

	/* Start code here */
	string city;
	string state;
	cout << "Where do you live?: ";
	string delimiter = ",";
	cin >> city >> delimiter >> state;
	cout << "Whats up " << name << "! You are " << age << " years old." << "You live in " << city << ", " << state << ".\n";


	/* End code here */

	return 0;
}
