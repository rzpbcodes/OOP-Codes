#include <iostream>
using namespace std;

class Circle
{
private:
    double radius;

public:
    Circle();
    Circle(double r);
    double getArea();
    double getRadius();
    void setRadius(double r);
};

Circle::Circle() {
    radius = 1;
}

Circle::Circle(double r) {
    radius = r;
    if(radius < 0)
        radius = 1;
}

double Circle::getArea() {
    return 3.14 * radius * radius;
}

double Circle::getRadius() {
    return radius;
}

void Circle::setRadius(double r) {
    radius = r;
    if(radius < 0)
        radius = 1;
}

int main() {
    Circle C1;
    C1.setRadius(10);
    cout<<C1.getRadius()<<endl;
    cout<<C1.getArea()<<endl;

    Circle C2(100);
    cout<<C2.getRadius()<<endl;
    cout<<C2.getArea()<<endl;

    return 0;
}

