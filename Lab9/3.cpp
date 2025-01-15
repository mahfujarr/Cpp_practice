#include <iostream>
using namespace std;

class Vector
{
private:
    double x, y;

public:
    Vector(double x, double y) : x(x), y(y) {}

    void display() const
    {
        cout << "Vector: (" << x << ", " << y << ")" << endl;
    }

    Vector operator-()
    {
        return Vector(-x, -y);
    }
};

int main()
{
    Vector force(3.0, 4.0);
    force.display();
    Vector oppositeForce = -force;
    oppositeForce.display();
    return 0;
}
