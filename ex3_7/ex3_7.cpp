#include<iostream>
using namespace std;

class Circle
{
public:
    int radius;
    double getArea()
    {
        return 3.14 * radius * radius;
    }
    Circle();
    Circle(int r);
    ~Circle();
};

Circle::Circle():Circle(1) { }
Circle::Circle(int r):radius(r)
{
    cout << "radius is " << radius << " generation of circle" << endl;
}

Circle::~Circle()
{
    cout << "radius is " << radius << " extinction of circle" << endl;
}

int main()
{
    Circle donut;
    Circle pizza(30);
    return 0;
}