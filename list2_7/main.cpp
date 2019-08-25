#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    const int STD_BMI = 22;
    double height;
    double weight;
    double bmi;
    double stdWeight;

    cout << "身長(cm)を入力してください:";
    cin >> height;

    cout << "体重(kg)を入力してください:";
    cin >> weight;

    height /= 100;

    bmi = weight / height / height;

    stdWeight = STD_BMI * height * height;

    cout << "あなたのBMIは、" << fixed << setprecision(1) << bmi << "です。" << endl;

    cout << "あなたの標準体重は、" << stdWeight << "kgです。" << endl;

    return 0;
}