#include "Account.h"

class AccountEx : public Account {
protected:
    string name;
public:
    string getName();

    AccountEx(string number, string name, int balance);
};

