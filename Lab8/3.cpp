#include <iostream>
using namespace std;

const double PI = 3.14159;

double calculateVolume(double side)
{
    return side * side * side;
}

double calculateVolume(double radius, double height)
{
    return PI * radius * radius * height;
}

double calculateVolume(double length, double width, double height)
{
    return length * width * height;
}

int main()
{
    double side = 3.0;
    double radius = 2.0, cylinderHeight = 5.0;
    double length = 4.0, width = 3.0, boxHeight = 6.0;

    cout << "Volume of the cube: " << calculateVolume(side) << endl;
    cout << "Volume of the cylinder: " << calculateVolume(radius, cylinderHeight) << endl;
    cout << "Volume of the rectangular box: " << calculateVolume(length, width, boxHeight) << endl;

    return 0;
}
