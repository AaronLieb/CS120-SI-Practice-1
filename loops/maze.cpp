#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {

	int size;
	cout << "Enter the size of the square: ";
	cin >> size;

	srand(time(0));

	// 0 or 1

	for(int i = 0; i<size; i++) {
		for(int j = 0; j<size; j++) {
			int random = rand() % 2;
			(random == 0) ? cout << '/' : cout << '\\';
		}
		cout << "\n";
	}
	cout << endl;

	return 0;
}
