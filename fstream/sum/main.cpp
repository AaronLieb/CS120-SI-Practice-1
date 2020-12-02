#include <iostream>
#include <fstream>

using namespace std;

int main() {
	ifstream inFile;
	inFile.open("numbers.txt");
	double num;
	double sum = 0;
	while(inFile >> num) {
		sum += num;
	}
	cout << sum << endl;
	inFile.close();
	return 0;
}
