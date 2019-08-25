#include <iostream>
#include <string>

using namespace std;

int getFee(int age) {
    int fee;
    if (age < 0) {
        throw string("マイナスの年齢が指定されました！");
    } else if (age > 150) {
        throw string("年齢が大き過ぎます！");
    }
    if (age < 20) {
        fee = 500;
    } else {
        fee = 1000;
    }
    return fee;
}

int main() {
    int age, fee;
    try {
        cout << "年齢を入力してください：";
        cin >> age;
        fee = getFee(age);
        cout << "料金は、" << fee << "円です。" << endl;
    } catch (string ex) {
        cout << ex << endl;
    }

    return 0;
}