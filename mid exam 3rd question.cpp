#include <iostream>
using namespace std;
double discountedPrice(double price, int quantity, int discount = 5)
{
    return (price * quantity) * (1 - discount / 100.0);
}
int main()
{
    int quantity, discount;
    double price;
    cout << "Enter the price of the book: ";
    cin >> price;
    cout << "Enter the quantity: ";
    cin >> quantity;
    cout << "Enter the discount rate: ";
    cin >> discount;
    cout << "Total price of the books are: " << discountedPrice(price, quantity, discount) << endl;
}