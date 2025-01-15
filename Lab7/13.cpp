#include <iostream>
#include <string>
using namespace std;

class Vehicle
{
protected:
    double mileage;
    double price;

public:
    Vehicle(double mileage, double price) : mileage(mileage), price(price) {}
    virtual void displayInfo() const = 0; // Pure virtual function
};

class Car : public Vehicle
{
protected:
    double ownershipCost;
    int warranty; // in years
    int seatingCapacity;
    string fuelType;

public:
    Car(double mileage, double price, double ownershipCost, int warranty, int seatingCapacity, const string &fuelType)
        : Vehicle(mileage, price), ownershipCost(ownershipCost), warranty(warranty), seatingCapacity(seatingCapacity), fuelType(fuelType) {}
};

class Bike : public Vehicle
{
protected:
    int numberOfCylinders;
    int numberOfGears;
    string coolingType;
    string wheelType;
    double fuelTankSize; // in inches

public:
    Bike(double mileage, double price, int numberOfCylinders, int numberOfGears, const string &coolingType, const string &wheelType, double fuelTankSize)
        : Vehicle(mileage, price), numberOfCylinders(numberOfCylinders), numberOfGears(numberOfGears), coolingType(coolingType), wheelType(wheelType), fuelTankSize(fuelTankSize) {}
};

class Audi : public Car
{
private:
    string modelType;

public:
    Audi(double mileage, double price, double ownershipCost, int warranty, int seatingCapacity, const string &fuelType, const string &modelType)
        : Car(mileage, price, ownershipCost, warranty, seatingCapacity, fuelType), modelType(modelType) {}

    void displayInfo() const override
    {
        cout << "Audi Model: " << modelType << endl;
        cout << "Ownership Cost: " << ownershipCost << endl;
        cout << "Warranty: " << warranty << " years" << endl;
        cout << "Seating Capacity: " << seatingCapacity << endl;
        cout << "Fuel Type: " << fuelType << endl;
        cout << "Mileage: " << mileage << endl;
        cout << "Price: " << price << endl;
    }
};

class Ford : public Car
{
private:
    string modelType;

public:
    Ford(double mileage, double price, double ownershipCost, int warranty, int seatingCapacity, const string &fuelType, const string &modelType)
        : Car(mileage, price, ownershipCost, warranty, seatingCapacity, fuelType), modelType(modelType) {}

    void displayInfo() const override
    {
        cout << "Ford Model: " << modelType << endl;
        cout << "Ownership Cost: " << ownershipCost << endl;
        cout << "Warranty: " << warranty << " years" << endl;
        cout << "Seating Capacity: " << seatingCapacity << endl;
        cout << "Fuel Type: " << fuelType << endl;
        cout << "Mileage: " << mileage << endl;
        cout << "Price: " << price << endl;
    }
};

class Bajaj : public Bike
{
private:
    string makeType;

public:
    Bajaj(double mileage, double price, int numberOfCylinders, int numberOfGears, const string &coolingType, const string &wheelType, double fuelTankSize, const string &makeType)
        : Bike(mileage, price, numberOfCylinders, numberOfGears, coolingType, wheelType, fuelTankSize), makeType(makeType) {}

    void displayInfo() const override
    {
        cout << "Bajaj Make: " << makeType << endl;
        cout << "Number of Cylinders: " << numberOfCylinders << endl;
        cout << "Number of Gears: " << numberOfGears << endl;
        cout << "Cooling Type: " << coolingType << endl;
        cout << "Wheel Type: " << wheelType << endl;
        cout << "Fuel Tank Size: " << fuelTankSize << " inches" << endl;
        cout << "Mileage: " << mileage << endl;
        cout << "Price: " << price << endl;
    }
};

class TVS : public Bike
{
private:
    string makeType;

public:
    TVS(double mileage, double price, int numberOfCylinders, int numberOfGears, const string &coolingType, const string &wheelType, double fuelTankSize, const string &makeType)
        : Bike(mileage, price, numberOfCylinders, numberOfGears, coolingType, wheelType, fuelTankSize), makeType(makeType) {}

    void displayInfo() const override
    {
        cout << "TVS Make: " << makeType << endl;
        cout << "Number of Cylinders: " << numberOfCylinders << endl;
        cout << "Number of Gears: " << numberOfGears << endl;
        cout << "Cooling Type: " << coolingType << endl;
        cout << "Wheel Type: " << wheelType << endl;
        cout << "Fuel Tank Size: " << fuelTankSize << " inches" << endl;
        cout << "Mileage: " << mileage << endl;
        cout << "Price: " << price << endl;
    }
};

int main()
{
    Audi audiCar(15.0, 50000, 2000, 3, 5, "Petrol", "A4");
    Ford fordCar(12.0, 40000, 1800, 2, 5, "Diesel", "Mustang");

    Bajaj bajajBike(40.0, 1500, 2, 5, "Air", "Alloys", 12.0, "Pulsar");
    TVS tvsBike(35.0, 1200, 1, 4, "Liquid", "Spokes", 10.0, "Apache");

    cout << "Audi Car Information:" << endl;
    audiCar.displayInfo();
    cout << endl;

    cout << "Ford Car Information:" << endl;
    fordCar.displayInfo();
    cout << endl;

    cout << "Bajaj Bike Information:" << endl;
    bajajBike.displayInfo();
    cout << endl;

    cout << "TVS Bike Information:" << endl;
    tvsBike.displayInfo();
    cout << endl;

    return 0;
}