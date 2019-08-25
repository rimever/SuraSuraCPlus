#include <iostream>
#include "CounterEx.h"

using namespace std;

int main() {
    CounterEx cnt;
    cout << "カウンタの値 = " << cnt.getVal() << endl;

    cnt.upVal();
    cnt.upVal();
    cnt.upVal();
    cout << "カウンタの値 = " << cnt.getVal() << endl;

    cnt.downVal();
    cnt.downVal();
    cout << "カウンタの値 = " << cnt.getVal() << endl;

    return 0;
}