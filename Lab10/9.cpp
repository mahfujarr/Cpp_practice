#include <iostream>
using namespace std;

class Box
{
private:
    double length, width, height;

public:
    Box(double l, double w, double h) : length(l), width(w), height(h) {}

    double getVolume() const
    {
        return length * width * height;
    }

    bool operator>(const Box &other)
    {
        return getVolume() > other.getVolume();
    }
};

int main()
{
    Box box1(3.0, 4.0, 5.0);
    Box box2(2.0, 6.0, 6.0);
    if (box1 > box2)
    {
        cout << "Box 1 is larger" << endl;
    }
    else
    {
        cout << "Box 2 is larger" << endl;
    }
    return 0;
}
