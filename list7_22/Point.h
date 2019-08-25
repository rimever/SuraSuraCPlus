#include <istream>

using namespace std;

class Point {
private:
    double x;
    double y;
public:
    Point(double x = 0, double y = 0);

    double getX();

    double getY();

    Point operator+(const Point &p);

    Point operator-(const Point &p);

    bool operator==(const Point &p);

    bool operator!=(const Point &p);

    friend istream &operator>>(istream &is, Point &p);

    friend ostream &operator<<(ostream &os, const Point &p);
};

