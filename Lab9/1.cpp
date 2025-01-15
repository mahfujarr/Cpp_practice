#include <iostream>
using namespace std;

class Temperature
{
private:
    double celsius;

public:
    Temperature(double tempC) : celsius(tempC) {}

    double getCelsius() const { return celsius; }

    double operator-()
    {
        return (celsius * 9.0 / 5.0) + 32;
    }
};

int main()
{
    Temperature temp(25.0);
    cout << "Temperature in Fahrenheit: " << -temp << "°F" << endl;
    return 0;
}
