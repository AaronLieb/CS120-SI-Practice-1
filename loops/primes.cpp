#include <iostream>

using namespace std;

int main() {
	
	for(int i = 2; i < 100; i++) {
		bool prime = true;
		for(int j = 2; j < i; j++) {
			if (i % j == 0) prime = false;
		}
		if (prime) cout << i << " ";
	}

	cout << endl;

	return 0;
}
