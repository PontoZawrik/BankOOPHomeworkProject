#include "main.h"

class account {
public:
	string name;
	string surname;
	string email;
	string password;

	string info() {
		string msg = "";
		msg += name + " " + surname;
		msg += "\nemail: " + email;
		msg += "\npassword: " + password;
		return msg;
	}

	void clear() {
		name = "no name";
		surname = "no surname";
		email = "not specified";
		password = "none";
	}
};

int main() {
	account ac;

	ac.name = "Steve";
	ac.surname = "Ivanov";
	ac.email = "blabla@gmail.com";
	ac.password = "2432";

	cout << "Before: " << endl;
	cout << ac.info() << endl;

	ac.clear();

	cout << "\nAfter: " << endl;
	cout << ac.info() << endl;

	system("pause");
	return 0;
}