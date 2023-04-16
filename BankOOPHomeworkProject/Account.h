#pragma once
#include "main.h";

class Account {
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
};