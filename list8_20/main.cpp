#include <iostream>
#include "MyCircle.h"

using namespace std;

int main() {
    MyCircle obj1(10);
    cout << "半径10の円の面積:" << obj1.getArea() << endl;
    return 0;
}