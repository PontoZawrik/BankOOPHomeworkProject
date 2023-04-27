#pragma once
#include "main.h";

class Account {
private:
	string name;
	string surname;
	string email;
	string password;

public:
	Account() {
		name = "no name";
		surname = "no surname";
		email = "not specified";
		password = "none";
	}

	Account(string nm, string surnm, string eml, string passwrd) {
		name = nm;
		surname = surnm;
		email = eml;
		password = passwrd;
	}

	Account(Account& account) {
		name = account.name;
		surname = account.surname;
		email = account.email;
		password = account.password;
	}

	~Account() {

	}

	string getName() {
		return name;
	}
	void setName(string n) {
		name = n;
	}
	string getSurname() {
		return surname;
	}
	void setSurname(string n) {
		surname = n;
	}
	string getEmail() {
		return email;
	}
	void setEmail(string n) {
		email = n;
	}
	string getPassword() {
		return password;
	}
	void setPassword(string n) {
		password = n;
	}

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