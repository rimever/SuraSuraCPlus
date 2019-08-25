#include <iostream>

using namespace std;

template<class T>
T getMin(T a, T b) {
    return a < b ? a : b;
}

int main() {
    int a, b, c;
    a = 123;
    b = 456;
    c = getMin(a, b);
    cout << c << endl;
    double x, y, z;
    x = 1.23;
    y = 4.56;
    z = getMin(x, y);
    cout << z << endl;
    return 0;
}