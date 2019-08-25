
#include "Account.h"

string Account::getNumber() {
    return this->number;
}

void Account::setBalance(int balance) {
    if (balance >= 0) {
        this->balance = balance;
    }
}

int Account::getBalance() {
    return this->balance;
}

Account::Account(string number, int balance) {
    this->number = number;
    this->balance = balance;

}