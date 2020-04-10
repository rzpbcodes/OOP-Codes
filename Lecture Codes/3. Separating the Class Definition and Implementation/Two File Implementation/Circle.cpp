class Circle
{
public:
    double radius;
    Circle();
    Circle(double r);
    double getArea();
};

Circle::Circle() {
    radius = 1;
}
Circle::Circle(double r) {
    radius = r;
}
double Circle::getArea() {
    return 3.14 * radius * radius;
}
