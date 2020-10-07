#include <iostream>
#include <iomanip>
using namespace std;


// Centered title
// menu choices
// 	food, descrition, price



int main() {
	const string NAME = "Crocodile Cafe";
	cout << setw(40) << NAME << "\n";
	cout << setw(60) << left << "Frap" << "$7.99\n";
	cout << setw(60) << left << "Burger" << "$1.99\n";
	cout << setw(60) << left << "Fries"  << "$5.99\n";
	cout << setw(60) << left << "Shake" << "$9.99\n";
}
