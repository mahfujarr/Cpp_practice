#include<iostream>
using namespace std;
#define PI 3.14159
class Circle
{
private:
    double radius;
    double area;
    double perimeter;
public:
    Circle(double rad)
    {
        radius = rad;
    };
    void Area()
    {
        cout << "The area of the circle is: " << PI*radius*radius << endl;
    }
    void Perimeter()
    {
        cout << "The perimeter of the circle is: " << 2*PI*radius << endl;
    }
};
int main()
{
    Circle c1(5);
    c1.Area();
    c1.Perimeter();
}
