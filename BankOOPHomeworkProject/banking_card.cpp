#include "banking_card.h"

BankingCard::BankingCard() {
	card_number = 0;
	user_name = "no name, no surname";
	expiry_date = "00/00";
	CVV = "000";
}

BankingCard::BankingCard(int cr_num, string usr_nm, string expr_dt, string CV) {
	card_number = cr_num;
	user_name = usr_nm;
	expiry_date = expr_dt;
	CVV = CV;
}

BankingCard::~BankingCard() {

}


bool BankingCard::luhn_algorithm() {

}


void BankingCard::replenishment() {

}

void BankingCard::debit() {

}