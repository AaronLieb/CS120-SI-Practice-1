#include <iostream>
#include <stdexcept>
using namespace std;

int main() {
	cout << "This program throws an error!\n";
	throw invalid_argument("Invalid Argument Error");

}
