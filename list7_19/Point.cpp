//
// Created by Ryohei Miura on 2019-08-15.
//

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

Point Point::operator-(const Point &p) {
    Point ans(this->x - p.x, this->y - p.y);
    return ans;
}

Point Point::operator+(const Point &p) {
    Point ans(this->x + p.x, this->y + p.y);
    return ans;
}

bool Point::operator==(const Point &p) {
    return this->x == p.x && this->y == p.y;
}

bool Point::operator!=(const Point &p) {
    return !(*this == p);
}

