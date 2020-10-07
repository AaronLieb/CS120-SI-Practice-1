#include <iostream>
#include <ctime> // time
#include <cstdlib> // srand, rand

using namespace std;

int main() {
	srand(time(0));
	cout << "rand(): " << rand() << "\n";
	cout << "rand() % 10: " << rand() % 10 << "\n";
	cout << "rand() % 10 + 1: " << rand() % 10 + 1 << "\n";
}
