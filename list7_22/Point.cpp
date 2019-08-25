#include "Point.h"

Point::Point(double x, double y) {
    this->x = x;
    this->y = y;

}

double Point::getX() {
    return this->x;
}

double Point::getY() {
    return this->y;
}

Point Point::operator+(const Point &p) {
    Point ans = Point(this->x + p.x, this->y + p.y);
    return ans;
}

Point Point::operator-(const Point &p) {
    Point ans = Point(this->x - p.x, this->y - p.y);
    return ans;
}

bool Point::operator==(const Point &p) {
    return this->x == p.x && this->y == p.y;
}

bool Point::operator!=(const Point &p) {
    return !(*this == p);
}

istream &operator>>(istream &is, Point &p) {
    is >> p.x >> p.y;
    return is;
}

ostream &operator<<(ostream &os, const Point &p) {
    os << "x = " << p.x << ", y = " << p.y;
    return os;
}
