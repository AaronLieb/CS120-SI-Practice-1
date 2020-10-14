#include <iostream>

using namespace std; 

int main() {
	int year;

	cout << "What year is it?: ";
	cin >> year;

	bool condition = (year > 2000);
	cout << "The year is greater than 2000. " << boolalpha << condition << endl;

	return 0;
}
