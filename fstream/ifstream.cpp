#include <iostream>
#include <fstream>

using namespace std;

int main() {
	ifstream file("data.txt");
	string str;
	file >> str;
	cout << str << endl;
	file.close();
	return 0;
}
