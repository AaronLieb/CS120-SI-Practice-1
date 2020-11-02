#include <iostream>

using namespace std;

int main() {
	
	enum Permissions {user, moderator, admin};

	Permissions account = user;

	if (account >= user) {
		cout << "You have user permissions\n";
	}

	if (account >= moderator) {
		cout << "You have moderator permissions\n";
	}

	if (account >= admin) {
		cout << "You have admin permissions\n";
	}

	return 0;
}
