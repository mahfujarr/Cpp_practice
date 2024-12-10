#include <iostream>
#include <string>
using namespace std;
class Shape
{
public:
    int width;
    int height;
    Shape(int w, int h)
    {
        width = w;
        height = h;
    }
};
class Color
{
public:
    string color;

    Color(string colour)
    {
        color = colour;
    }
};
class ColoredShape : public Shape, public Color
{
public:
    ColoredShape(int width, int height, string color) : Shape(width, height), Color(color) {}
    void printInfo()
    {
        cout << "Width: " << width << endl;
        cout << "Height: " << height << endl;
        cout << "Color: " << color << endl;
    }
};
int main()
{
    ColoredShape shape(10, 20, "Red");
    shape.printInfo();
    return 0;
}