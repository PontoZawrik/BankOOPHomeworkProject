#pragma once
#include "main.h"

class BankingCard {
private:
	int card_number;
	string user_name;
	string expiry_date;
	string CVV;

public:
	BankingCard();
	BankingCard(int cr_num, string usr_nm, string expr_dt, string CV);
	~BankingCard();

	bool luhn_algorithm();

	void replenishment();
	void debit();
};