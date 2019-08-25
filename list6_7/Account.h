#include <string>

using namespace std;

class Account {
protected:
    string number;
    int balance;
public:
    string getNumber();

    int getBalance();

    void setBalance(int balance);

    Account(string number, int balance);
};
