#include "user.h"

User::User() {
	name = "no name";
	surname = "no surname";
	email = "not specified";
	password = "none";
}

User::User(string nm, string surnm, string eml, string passwrd) {
	name = nm;
	surname = surnm;
	email = eml;
	password = passwrd;
}

User::User(User& account) {
	name = account.name;
	surname = account.surname;
	email = account.email;
	password = account.password;
}

User::~User() {

}

string User::getName() {
	return name;
}
void User::setName(string n) {
	name = n;
}
string User::getSurname() {
	return surname;
}
void User::setSurname(string n) {
	surname = n;
}
string User::getEmail() {
	return email;
}
void User::setEmail(string n) {
	email = n;
}
string User::getPassword() {
	return password;
}
void User::setPassword(string n) {
	password = n;
}

string User::info() {
	string msg = "";
	msg += name + " " + surname;
	msg += "\nemail: " + email;
	msg += "\npassword: " + password;
	return msg;
}

void User::clear() {
	name = "no name";
	surname = "no surname";
	email = "not specified";
	password = "none";
}