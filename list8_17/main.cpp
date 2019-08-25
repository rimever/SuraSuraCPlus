#include <iostream>

using namespace std;

class MyCircle {
private:
    double r;
public:
    MyCircle(double r);

    double getArea();
};

MyCircle::MyCircle(double r) {
    this->r = r;
}

double MyCircle::getArea() {
    return this->r * this->r * 3.14;
}


int main() {
    MyCircle obj(10);
    cout << "半径10の円の面積:" << obj.getArea() << endl;
    return 0;
}