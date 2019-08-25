#include <iostream>
#include "AccountEx.h"

int main() {
    AccountEx act("12345678", "山田一郎", 10000);
    cout << "口座番号:" << act.getNumber();
    cout << ", 口座名義人:" << act.getName();
    cout << ", 残高:" << act.getBalance() << endl;
    return 0;
}