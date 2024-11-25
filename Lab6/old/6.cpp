#include<iostream>
using namespace std;
#define PI 3.14159
class Rectangle
{
private:
    double length;
    double area;
    double breadth;
    double perimeter;
public:
    Rectangle(double length, double breadth)
    {
        length = length;
        breadth = breadth;
        area = length * breadth;
        perimeter = 2*(length + breadth);
    };
    void Area()
    {
        cout << "The area of the rectangle is: " << area << endl;
    }
    void Perimeter()
    {
        cout << "The perimeter of the rectangle is: " << perimeter << endl;
    }
};
int main()
{
    Rectangle r1(10,5);
    r1.Area();
    r1.Perimeter();
}