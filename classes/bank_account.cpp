#include "include/bank_account.hpp";

Account::Account(std::string name) : name(name) {};

void Account::deposit(int money) {
  balance += money;
}