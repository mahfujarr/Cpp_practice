#include <iostream>
#include <string>
using namespace std;
class Car
{
private:
    string make, model;
    int year, mileage;

public:
    Car(string ma, string mo, int ye, int mi)
    {
        make = ma;
        model = mo;
        year = ye;
        mileage = mi;
    }
    void displayInfo()
    {
        cout << "Car model: " << model << endl;
        cout << "Car make: " << make << endl;
        cout << "Year: " << year << endl;
        cout << "Mileage: " << mileage << endl;
    }
    void updateMileage()
    {
        int temp;
        cout << "Please Enter the mileage after last service: ";
        cin >> temp;
        mileage += temp;
        cout << "New mileage: " << mileage << endl;
    }
    void isLuxury()
    {
        if (mileage <=3000)
        {
            cout << "Luxury car";
        }
        else
        {
            cout << "Not Luxurious";
        }
        
        
    }
};
int main()
{
    int year, mileage;
    string make, model;
    Car car1("Camry", "Toyota", 2020, 36000);
    car1.displayInfo();
    car1.updateMileage();
    car1.isLuxury();
    return 0;
}
