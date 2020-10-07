#include <iostream>
using namespace std;

int main() {
	long int integer = 5;
	float decimal = 2.5;
	char character = 'C';
	string word = "Carrot";
	bool boolean = true;

	cout << "This is a demonstration of several of the different data types in C++\n\n";
	cout << "Integer (int):\nStores whole numbers.\nDoes not store decimals.\nSize: " << sizeof(integer) << " byte(s)\n\n";
	cout << "Double (double):\nA floating point decimal number.\nSize: " << sizeof(decimal) << " byte(s)\n\n";
	cout << "Character (char):\nA single character.\nWritten in code using single quotes (' ').\nStored in memory as an ascii number in the range 0-127.\nSize: " << sizeof(character) << " byte(s)\n\n";
	cout << "String (string):\nA string or array of characters.\nSize determined by length of string.\nWritten in code using double quotes (\" \")\n\n";
	cout << "Boolean (bool):\nA true or false value stored in memory as 0 or 1.\nSize: " << sizeof(boolean) << " byte(s).\nActual size of booleans is 1 bit.\nMultiple booleans can be stored in 1 byte.\n";
}
