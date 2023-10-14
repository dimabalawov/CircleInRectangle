

#include <iostream>
using namespace std;

class Rectangle
{
protected:
    int side;
public:
    Rectangle() = default;
    Rectangle(int s) :side(s) {};
};
class Circle
{
protected:
    int radius;
public:
    Circle() = default;
    Circle(int rad) :radius(rad) {};
};
class CircleInRectangle :public Rectangle, public Circle
{
public:
    CircleInRectangle(int s, int rad)
    {
        radius = rad;
        side = s;
    }
    void print()
    {
        cout << "Side of rectangle: " << side << endl;
        cout << "Radius of circle: " << radius << endl;;
    }
};

int main()
{
    CircleInRectangle a(20, 10);
    a.print();
}

