#include<iostream>
using namespace std;

class Circle
{
public:
    Circle();
    Circle(int r);
    int radius;
    double getArea();
};

Circle::Circle()
{
    radius = 1;
    cout << "radius is " << radius << " circle of generation " << endl;
}

Circle::Circle(int r)
{
    radius = r;
    cout << "radius is " << radius << " circle of generation " << endl;
}

double Circle::getArea()
{
    return 3.14 * radius * radius;
}

int main()
{
    Circle donut;
    double area = donut.getArea();
    cout << "area of donut is " << area << endl;

    Circle pizza(30);
    area = pizza.getArea();
    cout << "area of pizza is " << area << endl;
}
