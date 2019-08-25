#include <iostream>
#include "Counter.h"

using namespace std;

int main() {
    Counter cnt[10];
    cnt[3].upVal();
    cnt[3].upVal();

    cnt[5].upVal();
    cnt[5].upVal();
    cnt[5].upVal();
    cnt[5].upVal();

    cout << "3番のカウンタの値 = " << cnt[3].getVal() << endl;
    cout << "5番のカウンタの値 = " << cnt[5].getVal() << endl;

    return 0;
}