#include <iostream>
using namespace std;

class Rectangle
{
public:
    int width, height;
    bool isSquare()
    {
        if(width == height)
            return true;
        else
            return false;
    }
    Rectangle();
    Rectangle(int a);
    Rectangle(int a, int b);
};

Rectangle::Rectangle():Rectangle(1,1) { }
Rectangle::Rectangle(int a):Rectangle(a,a){ }
Rectangle::Rectangle(int a, int b):width(a), height(b){ }

int main()
{
    Rectangle rect1;
    Rectangle rect2(3, 5);
    Rectangle rect3(3);

    if(rect1.isSquare())
        cout << "rect1 is a square." << endl;
    if(rect2.isSquare())
        cout << "rect2 is a square." << endl;
    if(rect3.isSquare())
        cout << "rect3 is a square." << endl;
}
