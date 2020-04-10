#include <iostream>
using namespace std;

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

int main() {
    Circle C1;
    C1.radius = 10;
    cout<<C1.getArea();

    Circle C2;
    C2.radius = 1;
    cout<<C2.getArea();

    return 0;
}
