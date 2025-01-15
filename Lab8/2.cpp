#include <iostream>
using namespace std;

const double PI = 3.14159;

double calculateArea(double radius)
{
    return PI * radius * radius;
}

double calculateArea(double length, double width)
{
    return length * width;
}

double calculateArea(double base, double height, char)
{
    return 0.5 * base * height;
}

int main()
{
    double radius = 5.0;
    double length = 10.0, width = 4.0;
    double base = 8.0, height = 6.0;

    cout << "Area of the circle: " << calculateArea(radius) << endl;
    cout << "Area of the rectangle: " << calculateArea(length, width) << endl;
    cout << "Area of the triangle: " << calculateArea(base, height, 'T') << endl;

    return 0;
}
