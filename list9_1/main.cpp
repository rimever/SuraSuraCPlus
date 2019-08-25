#include <iostream>
using namespace std;

int getFee(int age) {
    int fee;
    if (age < 20) {
        fee = 500;
    }else {
        fee = 1000;
    }
    return fee;
}

int main() {
    int age,fee;
    cout << "年齢を入力してください：";
    cin >> age;
    fee = getFee(age);
    cout << "料金は、" << fee << "円です。" << endl;
    return 0;
}