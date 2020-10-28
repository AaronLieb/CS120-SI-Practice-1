#include <iostream>

using namespace std;

int main() {
	
	string str1, str2;

	cout << "Enter string 1: ";
	cin >> str1;

	cout << "Enter string 2: ";
	cin >> str2;


	cout << "String 1 is greater than string 2: " << boolalpha << (str1 > str2) << endl;


	return 0;
}
