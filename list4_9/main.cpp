#include <iostream>

using namespace std;

void sub(int *ptr) {
    cout << "sub関数:引数ptrに渡されたアドレス = " << ptr << endl;
    cout << "sub関数:引数ptrが指し示す変数の値 = " << *ptr << endl;

    *ptr = 456;
    cout << "sub関数:引数ptrが指し示す変数に書き込んだ値 = " << *ptr << endl;
    return;
}

int main() {
    int val = 123;
    cout << "main関数:変数valのアドレス = " << &val << endl;

    cout << "main関数:変数valの値" << val << endl;

    sub(&val);

    cout << "main関数:変数valの値 = " << val << endl;

    return 0;
}