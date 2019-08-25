#include <iostream>
#include "Point.h"

using namespace std;

int main() {
    Point p;
    cout << "x座標とy座標を入力してください:";
    cin >> p;
    cout << "入力された座標は、" << p << "です。" << endl;
    return 0;
}