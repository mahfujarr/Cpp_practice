#include <iostream>
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
class Rectangle : public Shape
{
public:
    Rectangle(int width, int height) : Shape(width, height)
    {
        
    }
    int calculateArea()
    {
        return width * height;
    }
};
int main()
{
    Rectangle r1(5, 10);
    int area = r1.calculateArea();
    cout << "Area of the rectangle: " << area << endl;
    return 0;
}