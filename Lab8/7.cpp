#include <iostream>
using namespace std;

double convertCurrency(double dollars, char toCurrency)
{
    if (toCurrency == 'E')
        return dollars * 0.85; // Dollars to Euros
    if (toCurrency == 'P')
        return dollars * 0.75; // Dollars to Pounds
    return dollars;            // Default no conversion
}

double convertCurrency(double euros)
{
    return euros * 1.18; // Euros to Dollars
}

int main()
{
    cout << "Dollars to Euros: " << convertCurrency(100.0, 'E') << endl;
    cout << "Euros to Dollars: " << convertCurrency(85.0) << endl;
    cout << "Dollars to Pounds: " << convertCurrency(100.0, 'P') << endl;
    return 0;
}
