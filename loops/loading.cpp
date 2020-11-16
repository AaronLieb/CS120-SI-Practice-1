#include <iostream>
#include <chrono>
#include <thread>

using namespace std;

void sleep(int);

int main() {
	
	for(int i = 0; i < 40; i++) {
		string bar;
		bar.assign(i, '#');
		cout << "\r" << bar << flush;
		sleep(100);
	}

	cout << endl;

	return 0;
}


void sleep(int ms) {
	this_thread::sleep_for(chrono::milliseconds(ms));
}
