#include <iostream>

using namespace std;

int main() {
		
	enum Days {Monday = 1, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday};
	Days m = Monday;
	Days t = Tuesday;
	Days w = Wednesday;

	cout << "Monday: " << m << endl;
	cout << "Tuesday: " << t << endl;
	cout << "Wednesday " << w << endl;

	return 0;
}
