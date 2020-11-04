#include <iostream>

using namespace std;

int main() {

	enum permission {normal_user, moderator, admin};

	permission account = admin;

	if(account >= 0) {
		cout << "You have normal user permission\n";
	}

	if(account >= 1) {
		cout << "You have moderator permission\n";
	}

	if(account >= 2) {
		cout << "You have admin permission\n";
	}

	return 0;
}
