#include <iostream>
using namespace std;
double convertTemperature(double celsius)
{
    return (celsius * 9.0 / 5.0) + 32;
}
double convertTemperature(double fahrenheit, char)
{
    return (fahrenheit - 32) * 5.0 / 9.0;
}
int main()
{
    double tempC = 25.0;
    double tempF = 77.0;

    cout << tempC << "°C is " << convertTemperature(tempC) << "°F" << endl;
    cout << tempF << "°F is " << convertTemperature(tempF, 'F') << "°C" << endl;
    return 0;
}