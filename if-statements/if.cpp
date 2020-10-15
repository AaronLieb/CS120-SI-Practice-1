#include <iostream>

using namespace std;

int main() {
	int age;

	cout << "How old are you? ";
	cin >> age;

	if (age >= 18) {
		if (age >= 55) {
			cout << "You are old!\n";
		} else {
			cout << "You are an adult!\n";
		}
	} else if (age == 0) {
		cout << "You are in the womb\n";
	} else if (age < 18) {
		cout << "You are a minor.\n";
	} else {
		cout << "You are not born yet.\n";
	}
}
