#include <iostream>

using namespace std;

int main() {
		
	enum Days {Monday = 1, Tuesday = 0, Wednesday, Thursday, Friday, Saturday, Sunday};
	Days m = Monday;
	Days t = Tuesday;
	Days w = Wednesday;
	Days th = Thursday;
	Days f = Friday;
	Days Sa = Saturday;
	Days Su = Sunday;

	Days someday;

	String day;
	cin >> day;

	cout << "Monday: " << m << endl;
	cout << "Tuesday: " << t << endl;
	cout << "Wednesday " << w << endl;
	cout << "Thursday " << th << endl;

	return 0;
}
