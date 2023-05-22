#pragma once
#include "main.h";

class User {
private:
	string name;
	string surname;
	string email;
	string password;

public:
	User();
	User(string nm, string surnm, string eml, string passwrd);
	User(User& account);
	~User();

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