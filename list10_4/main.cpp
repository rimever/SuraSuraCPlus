#include <iostream>

using namespace std;

template<class T>
class MyTriangle {
private:
    T bottom;
    T height;
public:
    MyTriangle(T bottom, T height) {
        this->bottom = bottom;
        this->height = height;
    }

    T getArea() {
        return this->bottom * this->height / 2;
    }
};

int main() {
    MyTriangle<int> iObj(10, 20);
    cout << "int:" << iObj.getArea() << endl;
    MyTriangle<double> dObj(30.0, 40.0);
    cout << "double:" << dObj.getArea() << endl;
    return 0;
}