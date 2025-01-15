#include <iostream>
using namespace std;

class Shape
{
public:
    virtual void printMessage()
    {
        cout << "This is a shape." << endl;
    }
};

class Polygon : public Shape
{
public:
    void printMessage() override
    {
        cout << "Polygon is a shape." << endl;
    }
};

class Rectangle : public Polygon
{
public:
    void printMessage() override
    {
        cout << "Rectangle is a polygon." << endl;
    }
};

class Triangle : public Polygon
{
public:
    void printMessage() override
    {
        cout << "Triangle is a polygon." << endl;
    }
};

class Square : public Rectangle
{
public:
    void printMessage() override
    {
        cout << "Square is a rectangle." << endl;
    }
};

int main()
{
    Shape shape;
    Polygon polygon;
    Rectangle rectangle;
    Triangle triangle;
    Square square;

    shape.printMessage();
    polygon.printMessage();
    rectangle.printMessage();
    triangle.printMessage();
    square.printMessage();

    return 0;
}
