#include "account.h"

Account::Account() {
	name = "no name";
	surname = "no surname";
	email = "not specified";
	password = "none";
}

Account::Account(string nm, string surnm, string eml, string passwrd) {
	name = nm;
	surname = surnm;
	email = eml;
	password = passwrd;
}

Account::Account(Account& account) {
	name = account.name;
	surname = account.surname;
	email = account.email;
	password = account.password;
}

Account::~Account() {

}

string Account::getName() {
	return name;
}
void Account::setName(string n) {
	name = n;
}
string Account::getSurname() {
	return surname;
}
void Account::setSurname(string n) {
	surname = n;
}
string Account::getEmail() {
	return email;
}
void Account::setEmail(string n) {
	email = n;
}
string Account::getPassword() {
	return password;
}
void Account::setPassword(string n) {
	password = n;
}

string Account::info() {
	string msg = "";
	msg += name + " " + surname;
	msg += "\nemail: " + email;
	msg += "\npassword: " + password;
	return msg;
}

void Account::clear() {
	name = "no name";
	surname = "no surname";
	email = "not specified";
	password = "none";
}