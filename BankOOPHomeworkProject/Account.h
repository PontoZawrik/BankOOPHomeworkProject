#pragma once
#include "main.h";

class Account {
private:
	string name;
	string surname;
	string email;
	string password;

public:
	Account();
	Account(string nm, string surnm, string eml, string passwrd);
	Account(Account& account);
	~Account();

	string getName();
	void setName(string n);

	string getSurname();
	void setSurname(string n);

	string getEmail();
	void setEmail(string n);

	string getPassword();
	void setPassword(string n);

	string info();
	void clear();
};