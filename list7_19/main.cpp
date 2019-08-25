#include <iostream>
#include "Point.h"

using namespace std;

int main() {
    Point p1(3, 5);
    Point p2(2, 4);
    Point p3(3, 5);

    if (p1 == p2) {
        cout << "p1 == p2" << endl;
    }

    if (p1 != p2) {
        cout << "p1 != p2" << endl;
    }

    if (p1 == p3) {
        cout << "p1 == p3" << endl;
    }

    if (p1 != p3) {
        cout << "p1 != p3" << endl;
    }

    return 0;
}