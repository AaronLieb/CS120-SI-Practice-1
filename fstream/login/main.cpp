#include <iostream>
#include <fstream>

using namespace std;

int main() {

	string username, password;
	ofstream userInfoOut("userInfo.txt", ios::app);
	ifstream userInfoIn("userInfo.txt");
	// checks if there file contains a username and password, if it does, store the values, else, get user input
	if (!(userInfoIn >> username && userInfoIn >> password)) {
		do {
			cout << "Enter your username: ";
			getline(cin, username);
		} while (username.find(' ') < username.length());
		cout << "Enter your password: ";
		cin >> password;

		userInfoOut << username << endl << password;
	}

	userInfoOut.close();
	userInfoIn.close();

	cout << "\n---------------\nWelcome, " << username << "!\n";
	cout << "a) Browse files\nb) Admin Panel\nc) Database\nd) Change Password\n---------------\n";

	return 0;
}
