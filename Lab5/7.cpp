#include <iostream>
#include <string>
using namespace std;
class Car
{
public:
    string brand;
    double lapTime;

    void updateLapTime(double newLapTime)
    {
        lapTime = min(lapTime, newLapTime);
    }
    void displayDetails()
    {
        cout << "Brand: " << brand << endl;
        cout << "Fastest Lap Time: " << lapTime << " seconds" << endl;
    }
};
int main()
{
    int n = 6;
    Car cars[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the name of the brand: ";
        cin >> cars[0].brand;
        cout << "Enter the laptime: ";
        cars[0].lapTime;
    }

    cars[2].updateLapTime(115.8);
    cars[1].updateLapTime(118.2);
    cout << "Car Details:\n";
    for (int i = 0; i < 6; i++)
    {
        cars[i].displayDetails();
        cout << endl;
    }
    return 0;
}