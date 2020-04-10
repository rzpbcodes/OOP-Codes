#include <iostream>
#include "Circle.h"

using namespace std;

int main()
{
    //main Program
    Circle C1;
    cout<<C1.getArea()<<endl;
    //outputs area as 314.0

    Circle C2(10);
    cout<<C2.getArea();

}
