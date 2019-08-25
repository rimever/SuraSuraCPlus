#include <iostream>

using namespace std;

//プロトタイプ宣言
double getCircleArea(double r);

int main() {
    cout << "半径10の円の面積:" << getCircleArea(10) << endl;
    return 0;
}

double getCircleArea(double r) {
    return r * r * 3.14;
}