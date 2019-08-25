#include <iostream>
#include "Account.h"

int main() {
    Account act("12345678", 10000);

    cout << "口座番号:" << act.getNumber();
    cout << ", 残高 " << act.getBalance() << endl;

    act.setBalance(30000);

    cout << "口座番号:" << act.getNumber();
    cout << ", 残高 " << act.getBalance() << endl;

    act.setBalance(-20000);

    cout << "口座番号:" << act.getNumber();
    cout << ", 残高 " << act.getBalance() << endl;

    return 0;
}