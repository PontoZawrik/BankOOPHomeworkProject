#include "main.h"
#include "Account.h"

int main() {
	Account ac("Steve", "Ivanov", "blabla@gmail.com", "2432");

	cout << "Before: " << endl;
	cout << ac.info() << endl;

	ac.clear();

	cout << "\nAfter: " << endl;
	cout << ac.info() << endl;

	system("pause");
	return 0;
}