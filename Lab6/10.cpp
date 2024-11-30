#include <iostream>
#include <string>
using namespace std;
class Vehicle
{
public:
    string registrationNumber;
    string ownerName;
    string insuranceStatus;
    Vehicle(string registrationNumber, string ownerName, string insuranceStatus)
    {
        this->registrationNumber = registrationNumber;
        this->ownerName = ownerName;
        this->insuranceStatus = insuranceStatus;
    }
    Vehicle(const Vehicle &other)
    {
        registrationNumber = other.registrationNumber;
        ownerName = other.ownerName;
        insuranceStatus = other.insuranceStatus;
    }
    void modifyInsuranceDetails(string newInsuranceStatus)
    {
        insuranceStatus = newInsuranceStatus;
    }
    void displayRecord()
    {
        cout << "Registration Number: " << registrationNumber << endl;
        cout << "Owner Name: " << ownerName << endl;
        cout << "Insurance Status: " << insuranceStatus << endl;
    }
};
int main()
{
    Vehicle vehicle1("AB12CD3456", "Mahfujar Rahman", "Active");
    Vehicle vehicle2 = vehicle1;
    vehicle2.modifyInsuranceDetails("Inactive");
    vehicle1.displayRecord();
    cout << endl;
    vehicle2.displayRecord();

    return 0;
}