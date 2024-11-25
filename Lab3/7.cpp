#include <iostream>
using namespace std;
void celsiusToFahrenheit(float celsius[], int size)
{
    for (int i = 0; i < size; i++)
    {
        celsius[i] = (celsius[i] * 9.0 / 5.0) + 32.0;
    }
}

int main()
{
    int n;
    cout << "Enter the number of temperatures: ";
    cin >> n;
    float celsius[n];
    cout << "Enter the temperatures in Celsius:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> celsius[i];
    }
    celsiusToFahrenheit(celsius, n);
    cout << "\nTemperatures in Fahrenheit:\n";
    for (int i = 0; i < n; i++)
    {
        cout << celsius[i] << " ";
    }
    cout << endl;
    return 0;
}