#include <iostream>
using namespace std;

int main() {
    double height;
    double weight;
    double bmi;

    cout << "身長(m)を入力してください:";
    cin >> height;

    cout << "体重(kg)を入力してください:";
    cin >> weight;

    bmi = weight / height / height;

    cout << "あなたのBMIは、" << bmi << "です。" << endl;

    if (bmi >= 25.0) {
        cout << "肥満です。" << endl;
    }else {
        cout << "肥満ではありません。" << endl;
    }

    return 0;
}