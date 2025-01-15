#include <iostream>
using namespace std;
class Vehicle
{
protected:
    int numWheels;
    int topSpeed;

public:
    Vehicle(int wheels, int speed) : numWheels(wheels), topSpeed(speed) {}
};

class Engine
{
protected:
    int horsepower;

public:
    Engine(int hp) : horsepower(hp) {}
};

class Car : public Vehicle, public Engine
{
private:
    int numDoors;

public:
    Car(int wheels, int speed, int hp, int doors)
        : Vehicle(wheels, speed), Engine(hp), numDoors(doors) {}

    void displayInfo()
    {
        cout << "Number of wheels: " << numWheels << endl;
        cout << "Top speed: " << topSpeed << " km/h" << endl;
        cout << "Horsepower: " << horsepower << " hp" << endl;
        cout << "Number of doors: " << numDoors << endl;
    }
};
int main()
{
    Car myCar(4, 200, 150, 4);
    myCar.displayInfo();
    return 0;
}