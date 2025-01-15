#include <iostream>
using namespace std;

class Car
{
private:
    int speed;

public:
    Car(int initialSpeed) : speed(initialSpeed) {}

    int getSpeed() const { return speed; }

    Car &operator--()
    {
        speed -= 10;
        if (speed < 0)
            speed = 0;
        return *this;
    }
};

int main()
{
    Car car(50);
    cout << "Initial Speed: " << car.getSpeed() << endl;
    --car;
    cout << "Speed after braking: " << car.getSpeed() << endl;
    return 0;
}
