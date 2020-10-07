#include <iostream>
//#include <iomanip>
using namespace std;

int main() {
	cout << ageplusone();
}

int ageplusone() {
	int age;
	cout << "What is your age?: ";
	cin >> age;
	return age + 1;
}
