#include <iostream>
using namespace std;

double applyDiscount(double price, double percentage)
{
    return price - (price * percentage / 100);
}

double applyDiscount(double price, int flatDiscount)
{
    return price - flatDiscount;
}

double applyDiscount(double price1, double price2, double price3, double percentage)
{
    return (price1 - (price1 * percentage / 100)) +
           (price2 - (price2 * percentage / 100)) +
           (price3 - (price3 * percentage / 100));
}

int main()
{
    double price1 = 100.0, price2 = 200.0, price3 = 300.0;

    cout << "Price after percentage discount: " << applyDiscount(500.0, 10.0) << endl;
    cout << "Price after flat discount: " << applyDiscount(500.0, 50) << endl;
    cout << "Total price after percentage discount: " << applyDiscount(price1, price2, price3, 10.0) << endl;

    return 0;
}
