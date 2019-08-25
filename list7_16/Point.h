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
};


