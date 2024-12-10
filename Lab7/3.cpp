#include <iostream>
using namespace std;
class Vehicle
{
public:
    int numWheels;
    int topSpeed;
    Vehicle(int numWheels, int topSpeed)
    {
        this->numWheels = numWheels;
        this->topSpeed = topSpeed;
    }
};
class Car : public Vehicle
{
public:
    int numDoors;
    Car(int numWheels, int topSpeed, int numDoors) : Vehicle(numWheels, topSpeed)
    {
        this->numDoors = numDoors;
    }
};
int main()
{
    Car car(4, 180, 4);
    cout << "Number of wheels: " << car.numWheels << endl;
    cout << "Top speed: " << car.topSpeed << " km/h" << endl;
    cout << "Number of doors: " << car.numDoors << endl;
    return 0;
}