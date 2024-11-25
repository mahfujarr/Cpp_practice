#include <iostream>
using namespace std;
void updateMileage(int mileages[], int numCars, int serviceMileage)
{
    for (int i = 0; i < numCars; i++)
    {
        mileages[i] += serviceMileage;
    }
}
int main()
{
    const int numCars = 3;
    int mileages[numCars] = {10000, 25000, 35000};
    int serviceMileage;
    cout << "Enter the mileage added after the service: ";
    cin >> serviceMileage;
    updateMileage(mileages, numCars, serviceMileage);
    cout << "Updated mileages:\n";
    for (int i = 0; i < numCars; i++)
    {
        cout << "Car " << i + 1 << ": " << mileages[i] << " kilometers\n";
    }
    return 0;
}