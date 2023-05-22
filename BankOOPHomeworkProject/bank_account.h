#pragma once
#include "main.h"

class Bank_account {
private:
	int maney;
	string number;
public:
	Bank_account();
	Bank_account(int maney, string number);
	~Bank_account();

	string info();
};