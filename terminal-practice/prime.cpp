#include <iostream>

using namespace std;

int main() {
	int num, i, upto=1000000000;
	for (num = 2; num <= upto; num++) {
		for(i = 2; i<= (num/2); i++) {
			if (num % i == 0) {
				i = num;
				break;
			}
		}

		if(i != num) {
			cout << num << " ";
		}
	}
	return 0;
}
