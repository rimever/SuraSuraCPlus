#include <iostream>
using namespace std;

int main() {
    double height;
    double weight;
    double bmi;

    cout << "身長(m)を入力してください";
    cin >> height;

    cout << "体重(kg)を入力してください";
    cin >> weight;

    bmi = weight / height / height;

    cout << "あなたのBMIは、" << bmi << "です。" << endl;

    return 0;
}